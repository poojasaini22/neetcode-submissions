class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> baseball;
        int res=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int top1=baseball.top();
                baseball.pop();
                int sum=top1+(baseball.top());
                baseball.push(top1);
                baseball.push(sum);
                res+=baseball.top();
            }
            else if(operations[i]=="D"){
                int sum=2*(baseball.top());
                baseball.push(sum);
                res+=baseball.top();
            }
            else if(operations[i]=="C"){
                res-=baseball.top();
                baseball.pop();
            }
            else{
                baseball.push(stoi(operations[i]));
                res+=baseball.top();
            }
        }
       
        return res;
    }
};