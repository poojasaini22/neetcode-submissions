class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums1.size();i++){
            hashmap[nums1[i]]=i;
        }
        vector<int> res(nums1.size(),-1);
        

        stack<int> stack;
        for (int i =0;i<nums2.size();i++){
            int currentvalue=nums2[i];

while (!stack.empty() && currentvalue>stack.top()){
    int val=stack.top();
    stack.pop();
    int index=hashmap[val];
    res[index]=currentvalue;
}
if(hashmap.find(currentvalue) != hashmap.end()){
    stack.push(currentvalue);
}
        }
        return res;
    }
};