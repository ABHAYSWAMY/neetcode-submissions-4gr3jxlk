class Solution {
public:
    void pick(stack<int>& st){
        int a = st.top();
                st.pop();
                int b = st.top();
                int c = a+b;
                st.push(a);
                st.push(c);
    }
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int res = 0;
        for(int i = 0; i<operations.size();i++){
            string c = operations[i];
            if(c == "D"){
                int d = 2*st.top();
                st.push(d);
            }
            else if(c == "C") st.pop();
            else if(c == "+") pick(st);
            else  st.push(stoi(c));
        }
        while(!st.empty()){ res = res + st.top();
        st.pop();}
        return res;
    }
};