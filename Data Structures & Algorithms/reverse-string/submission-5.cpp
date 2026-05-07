class Solution {
public:
    void reverseString(vector<char>& s) {
        // O(n) space less efficient(stack)
        // stack<char> st;
        // for(char c: s){
        //     st.push(c);
        // }
        // int i=0;
        // while(!st.empty()){
        //     s[i]=st.top();
        //     st.pop();
        //     i++;
        // }
        //recursion O(n) less efficient
        
        
        reverse(0,s.size()-1,s);
    }
    void reverse(int l, int r,vector<char>& s){
            if(l<r){
            char temp;
                temp=s[l];
                s[l]=s[r];
                s[r]=temp;
                reverse(l+1,r-1,s);
            }
            // return s;
        }
};