class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n,0);
        stack<int> decgrt;
        for(int i=0;i<n;i++){
            while(!decgrt.empty() && temperatures[i]>temperatures[decgrt.top()]){
                int prev = decgrt.top();
                decgrt.pop();
                res[prev] = i - prev;
            }
            decgrt.push(i);
        }
        return res;
    }
};
