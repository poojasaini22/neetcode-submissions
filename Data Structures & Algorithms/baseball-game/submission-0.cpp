class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> baseball;
        int res=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int sum=(baseball.back())+(baseball[baseball.size()-2]);
                baseball.push_back(sum);
            }
            else if(operations[i]=="D"){
                int sum=2*(baseball.back());
                baseball.push_back(sum);
            }
            else if(operations[i]=="C"){
                baseball.pop_back();
            }
            else{
                baseball.push_back(stoi(operations[i]));
            }
        }
        for(int i=0;i<baseball.size();i++){
            res+=baseball[i];
        }
        return res;
    }
};