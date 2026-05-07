class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int l=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         nums[l]=nums[i];
        //         l++;
        //     }
        // }
        // while(l<nums.size()){
        //     nums[l]=0;
        //     l+=1;
        // }
        for(int i=0,l=0; i<nums.size();i++){
            if(nums[i]){
                swap(nums[l],nums[i]);
                l++;
            }
        }
    }
};