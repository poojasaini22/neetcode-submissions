class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> kmap;
        for(char c: s){
            kmap[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(kmap[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};