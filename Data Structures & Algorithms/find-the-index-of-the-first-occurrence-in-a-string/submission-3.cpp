class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            int j=0;
            while(i<haystack.size() && j<needle.size() &&
            haystack[i+j]==needle[j]){
                // cout<<"j"<<j<<endl;
                // cout<<"i"<<i<<endl;
                // // if(j==needle.size()){
                // //     return i-(needle.size()-1);
                  
                // // }
                // cout<<haystack[i]<<endl;
                j++;
              
            }
              if(j==needle.size()){
                    return i;
                  
                }
               
        }
        return -1;
    }
};