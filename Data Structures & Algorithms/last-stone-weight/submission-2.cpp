class Solution {
private:
    priority_queue<int> maxheap;
public:
    int lastStoneWeight(vector<int>& stones) {
       
        for(int num: stones){
            maxheap.push(num);
        }
        while(maxheap.size()>1){
        int max1=maxheap.top();
        maxheap.pop();
        int max2=maxheap.top();
        maxheap.pop();
        if(max2<max1){
            int val=max1-max2;
            maxheap.push(val);
        }
    
    }
    return maxheap.empty()?0:maxheap.top();
    }
};
