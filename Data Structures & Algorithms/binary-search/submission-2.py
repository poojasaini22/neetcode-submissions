class Solution:
    def search(self, nums: List[int], target: int) -> int:
        mid=len(nums)//2
        print(mid)
        if(target>nums[mid]):
            j=mid
            while j<len(nums):
                if nums[j]==target:
                    return j
                j+=1
                
        else:
            j=0
            while j<=mid:
                if nums[j]==target:
                    return j
                j+=1
        return -1