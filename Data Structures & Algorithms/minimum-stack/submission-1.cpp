class MinStack {
    stack<int> stk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        stack<int> temp;
        int minval=stk.top();
        while (stk.size()){
            minval=min(minval,stk.top());
            temp.push(stk.top());
            stk.pop();
        }
        while (!temp.empty()){
            stk.push(temp.top());
            temp.pop();
        }
        return minval;

        
    }
};
