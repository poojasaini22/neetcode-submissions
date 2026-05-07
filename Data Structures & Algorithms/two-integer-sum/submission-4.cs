public class Solution {
    public int[] TwoSum(int[] nums, int target) {
       Dictionary<int,int> total= new Dictionary<int,int>();
       
       for(int i=0;i<nums.Length;i++){
        int diff=target-nums[i];
        if(total.ContainsKey(diff)){
            return new int[] {total[diff],i};
        }
        else{
            total[nums[i]]=i;
        }
       }
       return null;
    }
    }

