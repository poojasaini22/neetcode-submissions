class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        mapNum={}
       
        for i in (set(nums)):
            print(i)
            maximum=nums.count(i)
            print(maximum)
            #val=next(maximum)
            #mapNum[i]=(maximum//2)
            mapNum[i]=maximum
        print(mapNum)
        return max(mapNum, key=mapNum.get)
