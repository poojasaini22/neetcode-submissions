class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightmax=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int newmax=max(rightmax,arr[i]);
            arr[i]=rightmax;
            rightmax=newmax;
        }
        return arr;
    }
};