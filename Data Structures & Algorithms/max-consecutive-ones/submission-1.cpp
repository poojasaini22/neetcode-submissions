class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int oldvalue=0,newvalue=0;
        for(int num : nums){
            newvalue=num?newvalue+1:0;
            oldvalue=max(oldvalue,newvalue);
        }
        return oldvalue;
    }
};