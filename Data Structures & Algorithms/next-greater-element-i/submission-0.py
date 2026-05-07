class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        finallist=[]
        
        for i in range(len(nums1)):
            print("first:",i," ",nums1[i])
            index=nums2.index(nums1[i])
            print("index:",index)
            if index==len(nums2)-1:
                finallist.append(-1)
            # j=index+1
            for j in range(index+1,len(nums2)):
                if nums2[j]>nums1[i]:
                    print("second:",nums2[j]," ",nums1[i])
                    finallist.append(nums2[j])
                    break
             
                else:
                    print("j",j ,"and length",len(nums2))
                    if j==len(nums2)-1:
                        finallist.append(-1)
        return finallist        
            # for j in nums2:
            #     if nums1[i]==nums2[j]: