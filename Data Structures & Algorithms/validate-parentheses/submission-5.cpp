class Solution {
public:
    bool isValid(string s) {
    //     stack<char> stack;
    //     for(char &str: s){
    //         if(str=='{' || str=='('|| str=='['){
    //             stack.push(str);
    //         }
    //         else{
    //             if(str=='}' && !stack.empty()){
    //                 if(stack.top()=='{')
    //                 {stack.pop();}
    //                 else{
    //                 return false;
    //             }
    //             }
    //              else  if(str==')' && !stack.empty()){
    //                 if(stack.top()=='(')
    //                 {stack.pop();}
    //                 else{
    //                 return false;
    //             }
    //             }
                
    //              else  if(str==']' && !stack.empty()){
    //                 if(stack.top()=='[')
    //                 {stack.pop();}
    //                 else{
    //                 return false;
    //             }
    //             }
    //             else{
    //                 return false;
    //             }
                
    //         }
    //     }
        
    //         return stack.empty();
    stack<char> stack;
    unordered_map<char,char> closetoopen={
        {'}','{'},
        {']','['},
        {')','('}
    };
        for(char &c:s){
            if (closetoopen.find(c)!=closetoopen.end()){
                if (!stack.empty() && stack.top()==closetoopen[c]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
     }
};
