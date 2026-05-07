class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> total;
       int n=nums.size();
       for(int i=0;i<n;i++){
        int diff=target-nums[i];
        if(total.find(diff) != total.end()){
            return {total[diff],i};
        }
        else{
            total.insert({nums[i],i});
        }
       }
       return {};
    }
};
