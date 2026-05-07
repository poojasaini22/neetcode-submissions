class Solution {
public:
    bool isPalindrome(string s) {
        // stringstream ss(s);
        string w;
        
        for(char c:s){
            if(isalnum(c)){
                w.push_back(tolower(c));
            }
        }
        for(char n:w){
            cout<<n;
        }
        int l=0;
        int r=w.size()-1;
        while(l<r){
            if(w[l]!=w[r]){
                return false;
            }
            l+=1;
            r-=1;
        }
        return true;
    }
};
