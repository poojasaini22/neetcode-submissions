class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res;
        vector<int> end;
        for(int n: nums){
            if(n%2==0){
                res.push_back(n);
            }
            else{
                end.push_back(n);
            }
        }
        res.insert(res.end(),end.begin(),end.end());
        return res;
    }
};