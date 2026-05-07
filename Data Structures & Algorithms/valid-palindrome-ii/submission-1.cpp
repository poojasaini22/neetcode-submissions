class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return (ispallin(l+1,r,s) || ispallin(l,r-1,s));
            }
            l++;
            r--;
        }
        return true;
    }
    bool ispallin(int l,int r, string s){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};