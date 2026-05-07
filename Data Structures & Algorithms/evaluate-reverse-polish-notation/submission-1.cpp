class Solution {
public:
    int evalRPN(vector<string>& tokens) {

      stack<int> stk;
      int res=0;
      
  
        for(auto& token: tokens){
            if(token=="*" || token =="+" || token == "-" || token =="/"){
                int val1=stk.top();
                stk.pop();
                int val2=stk.top();
                stk.pop();
                if(token=="+"){
                    res=val1+val2;
                }
                else if(token=="-"){
                    res=val2-val1;
                }
                else if(token=="*"){
                    res=val1*val2;
                }
                else{
                    res=val2/val1;
                }
                stk.push(res);
            }
            else{
                stk.push(stoi(token));
            }
        }
        if(res){
            return res;
        }
        else{
            return stk.top();
        }
    }
};
