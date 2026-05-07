class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # mapNum={}
       
        # for i in (set(nums)):
        #     maximum=nums.count(i)
        #     mapNum[i]=maximum
     
        # return max(mapNum, key=mapNum.get)
        res, count=0,0
        for n in nums:
            if count==0:
                res=n
            count+=(1 if n==res else -1)
        return res
