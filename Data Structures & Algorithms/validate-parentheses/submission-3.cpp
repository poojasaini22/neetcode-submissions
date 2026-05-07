class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(char &str: s){
            if(str=='{' || str=='('|| str=='['){
                stack.push(str);
            }
            else{
                if(str=='}' && !stack.empty()){
                    if(stack.top()=='{')
                    {stack.pop();}
                    else{
                    return false;
                }
                }
                 else  if(str==')' && !stack.empty()){
                    if(stack.top()=='(')
                    {stack.pop();}
                    else{
                    return false;
                }
                }
                
                 else  if(str==']' && !stack.empty()){
                    if(stack.top()=='[')
                    {stack.pop();}
                    else{
                    return false;
                }
                }
                else{
                    return false;
                }
                
            }
        }
        
            return stack.empty();
        
    }
};
