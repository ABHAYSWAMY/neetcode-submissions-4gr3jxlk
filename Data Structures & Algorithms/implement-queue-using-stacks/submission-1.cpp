class MyQueue {
public:
    stack<int> st;
    MyQueue() {    
    }
    
    void push(int x) {
        stack<int> st2;
        int size = st.size();
        for(int i = 0; i < size; i++){
            st2.push(st.top());
            st.pop();
        }
        st.push(x);
        int size2 = st2.size();
        for(int i = 0; i < size2; i++){
            st.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int value = st.top();
        st.pop();
        return value;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
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