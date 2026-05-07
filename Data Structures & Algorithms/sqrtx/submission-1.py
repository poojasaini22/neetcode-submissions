class Solution:
    def mySqrt(self, x: int) -> int:
        l,r=1,x
        while(l<=r):
            m=l+(r-l)//2
            res=m*m
            if(res>x):
                r=m-1
            elif(res<x):
                l=m+1
                # res=m
            else:
                return m
        # return res
        return r