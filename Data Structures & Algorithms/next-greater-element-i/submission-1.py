class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        finallist=[]
        
        for i in range(len(nums1)):
            index=nums2.index(nums1[i])
            if index==len(nums2)-1:
                finallist.append(-1)
            for j in range(index+1,len(nums2)):
                if nums2[j]>nums1[i]:
                    finallist.append(nums2[j])
                    break
                else:
                    if j==len(nums2)-1:
                        finallist.append(-1)
        return finallist        
      