class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # mid=len(nums)//2
        # print(mid)
        # if(target>nums[mid]):
        #     j=mid
        #     while j<len(nums):
        #         if nums[j]==target:
        #             return j
        #         j+=1
                
        # else:
        #     j=0
        #     while j<=mid:
        #         if nums[j]==target:
        #             return j
        #         j+=1
        l,r=0,len(nums)-1
        while l<=r:
            m=l+((r-l)//2)
            if nums[m]>target:
                r=m-1
            elif nums[m]<target:
                l=m+1
            else:
                return m
        return -1










        return -1