class Solution:
    def maxDifference(self, s: str) -> int:
        countmap={}
      
        for i in s:
            countmap[i]=countmap.get(i,0)+1
        maxodd,mineven=0,len(s)
        # maxoddelement=max(( x for x in countmap.values() if x%2==1),default=0)
        # mineven=min(( x for x in countmap.values() if x%2==0),default=0)
        # return (maxoddelement-mineven)
        for n in countmap.values():
            if n & 1:
              maxodd=max(n,maxodd)
            else:
              mineven=min(n,mineven)  
        return maxodd-mineven
  
