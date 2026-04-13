class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> mincaphp;
        for(int i=0;i<profits.size();i++) mincaphp.push({capital[i],profits[i]});
        priority_queue<int> maxprofhp;
        int count = 0;
        int ans = w;
        while(count < k && mincaphp.top().first<=ans){
            while(mincaphp.size()>0 && mincaphp.top().first <= ans){
                maxprofhp.push(mincaphp.top().second);
                mincaphp.pop();
            }
            if(maxprofhp.size()>0){
                ans += maxprofhp.top();
                maxprofhp.pop();
                count++;
            }
        }
        return ans;
    }
};