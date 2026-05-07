class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<int,int> counts;
         unordered_map<int,int> countt;
        for(int i=0;i<s.size();i++){
            counts[s[i]]++;
            countt[t[i]]++;
        }
        return counts==countt;
    }
};
