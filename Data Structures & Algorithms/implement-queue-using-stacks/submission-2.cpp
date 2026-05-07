class MyQueue {
    private:
     stack<int> s;
    stack<int> s1;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
          s.push(x);
    }
    
    int pop() {
        //   for(int i=s.size()-1;i>0;i--){
        //     s1.push(s.top());
        //     s.pop();
        // }
        // int val=s.top();
        // s.pop();
        //     for(int i=0;i<s1.size();i++){
        //     s.push(s1.top());
        //     s1.pop();
        // }
        // return val;
        if (s1.empty()){
            while(!s.empty()){
                s1.push(s.top());
                s.pop();
            }
        }
        int val = s1.top();
        s1.pop();
        return val;
    }
    
    int peek() {
        // for(int i=s.size()-1;i>0;i--){
        //     s1.push(s.top());
        //     s.pop();
        // }
        // int val=s.top();
     
        //     for(int i=0;i<s1.size();i++){
        //     s.push(s1.top());
        //     s1.pop();
        // }
        // return val;
        if (s1.empty()){
            while(!s.empty()){
                s1.push(s.top());
                s.pop();
            }
        }
        return s1.top();
    }
    
    bool empty() {
        return max(s.size(),s1.size())==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */