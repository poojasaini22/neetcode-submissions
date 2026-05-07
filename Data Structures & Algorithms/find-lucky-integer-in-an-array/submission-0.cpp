class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>res;
        int fre[500]={};
        for(int a: arr){
            fre[a]++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==fre[arr[i]]){
                res.push_back(arr[i]);
            }
        }
        if(!res.empty())
        {return *max_element(res.begin(),res.end());}
        else{
        return -1;}
        
    }
};