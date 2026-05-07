class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        newvalue,oldvalue,i=0,0,0
        while(i<len(nums)):
            if(nums[i]==1):
                newvalue+=1
                oldvalue=max(newvalue,oldvalue)
            else:
                newvalue=0
            i+=1
        return oldvalue