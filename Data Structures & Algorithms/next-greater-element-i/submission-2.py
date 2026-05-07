class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        # finallist=[]
        
        # for i in range(len(nums1)):
        #     index=nums2.index(nums1[i])
        #     if index==len(nums2)-1:
        #         finallist.append(-1)
        #     for j in range(index+1,len(nums2)):
        #         if nums2[j]>nums1[i]:
        #             finallist.append(nums2[j])
        #             break
        #         else:
        #             if j==len(nums2)-1:
        #                 finallist.append(-1)
        # return finallist        
        num1index={n:i for i,n in enumerate(nums1)}
        res=[-1] * len(nums1)
        stack=[]
        for i in range(len(nums2)):
            currentvalue=nums2[i]
            while stack and currentvalue>stack[-1]:
                val=stack.pop()
                index=num1index[val]
                res[index]=currentvalue
            if(currentvalue in num1index):
                stack.append(currentvalue)
        return res


