class Solution:
    def findLucky(self, arr: List[int]) -> int:
        kmap={}
        ans=-1
        for h in arr:
            if h not in kmap:
                kmap[h]=0
            kmap[h]+=1
        for i in (kmap):
            if(i==kmap[i]):
                ans=max(ans,i)
        
        return ans