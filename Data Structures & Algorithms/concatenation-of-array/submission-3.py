class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans=[]
        for item in nums:
            ans.append(item)
        
        ans.extend(nums);
        return ans;   
        