public class Solution {
    public bool hasDuplicate(int[] nums) {
        bool flag=false;
        for(int i=0;i<nums.Length;i++){
            for(int j=0;j<nums.Length;j++){
                if(i!=j){
                    if(nums[i]==nums[j]){
                        flag=true;
                        return flag;
                    }
                    else{
                        flag=false;
                    }
                }
            }
        }
        return flag;
    }
}