class MinStack {
public:
    stack<int> st;
    MinStack() {    
    }
    void push(int val) {
        st.push(val);
    } 
    void pop() {
        st.pop();
    }
    int top() {
       return st.top(); 
    }   
    int getMin() {
       stack<int> st2 = st;
       int size = st2.size();
       int min = st2.top();
       for(int i = 0; i < size; i++){
          int val = st2.top();
          min = (val > min) ? min : val;
          st2.pop();
       } return min;
    }
};
