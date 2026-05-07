class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>res;
        int fre[500]={};
        for(int a: arr){
            fre[a]++;
        }
        int ans=-1;
        for(int i=1;i<501;i++){
            // if(arr[i]==fre[arr[i]]){
                if(fre[i]==i){
                    ans=max(ans,i);
                }
                // ans=max(ans,arr[i]);
                // res.push_back(arr[i]);
            }
        
        // if(!res.empty())
        // // {return *max_element(res.begin(),res.end());}
        // else{
        // return -1;}
        return ans;
        
    }
};