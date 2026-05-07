class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stk;
        vector<int>res(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++){
            int t=temperatures[i];
            while(!stk.empty() && t>stk.top().first){
                int stackT=stk.top().first;
                int stackI=stk.top().second;
                res[stackI]=i-stackI;
                stk.pop();
            }
            stk.push({t,i});
        }


      

        return res;
    }
};
