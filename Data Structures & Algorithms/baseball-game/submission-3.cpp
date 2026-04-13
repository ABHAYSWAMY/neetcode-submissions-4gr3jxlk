class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C") stk.pop();
            else if(operations[i]=="D") stk.push(stk.top()*2);
            else if(operations[i]=="+"){
                int n1 = stk.top();
                stk.pop();
                int n2 = stk.top();
                int n3 = n1 + n2;
                stk.push(n1);
                stk.push(n3);
            }
            else stk.push(stoi(operations[i]));
        }
        int sum = 0;
        while(stk.size()>0){
            sum += stk.top();
            stk.pop();
        }
        return sum;
    }
};