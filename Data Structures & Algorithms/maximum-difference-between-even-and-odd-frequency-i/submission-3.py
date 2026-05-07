class Solution:
    def maxDifference(self, s: str) -> int:
        countmap={}
      
        for i in s:
            countmap[i]=countmap.get(i,0)+1
        maxoddelement=max(( x for x in countmap.values() if x%2==1),default=0)
        mineven=min(( x for x in countmap.values() if x%2==0),default=0)
        return (maxoddelement-mineven)
  
