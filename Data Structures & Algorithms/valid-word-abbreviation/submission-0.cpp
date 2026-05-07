class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
       int i=0,j=0;
       while(i<word.size() && j<abbr.size()){
        if(word[i]==abbr[j]){
            i++;
            j++;
        }
        else if
           ( abbr[j]=='0' || (isalpha(abbr[j]))){
                return false;
            }
        
        else{
            int sublen=0;
            while(j<abbr.size() && !(isalpha(abbr[j]))){
                sublen=sublen*10+(abbr[j]-'0');
                j++;
            }
            i+=sublen;
        }
       }
        return i==word.size() && j==abbr.size();
       }
       
    }
;