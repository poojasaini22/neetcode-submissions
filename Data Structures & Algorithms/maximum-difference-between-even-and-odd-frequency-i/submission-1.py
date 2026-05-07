class Solution:
    def maxDifference(self, s: str) -> int:
        countmap={}
        # maxoddelement=0
        # maxevenelement=0
        # mineven=0
        # minodd=0
        for i in s:
            countmap[i]=countmap.get(i,0)+1
        maxoddelement=max(( x for x in countmap.values() if x%2==1),default=0)
        # for v in countmap.value():
        #     if v%2==1:
        # maxevenelement=max(( x for x in countmap.values() if x%2==0),default=0)
        mineven=min(( x for x in countmap.values() if x%2==0),default=0)
        # minodd=min(( x for x in countmap.values() if x%2==1),default=0)
        # if abs(maxoddelement-mineven)> abs(maxevenelement-minodd):
        return (maxoddelement-mineven)
        # else:
        #     return abs(maxevenelement-minodd)
