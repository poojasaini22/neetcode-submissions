class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        self.maxheap=[-s for s in stones]
        heapq.heapify(self.maxheap)
        while len(self.maxheap)>1:
            max1=heapq.heappop(self.maxheap)
           
            max2=heapq.heappop(self.maxheap)
            if max2>max1:
                val=max1-max2
                heapq.heappush(self.maxheap,val)
        heapq.heappush(self.maxheap,0)
        return abs(self.maxheap[0])