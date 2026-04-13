class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<pair<int,int>,int>, vector<pair<pair<int,int>,int>>, greater<pair<pair<int,int>,int>>> minhp;
        for(int i=0;i<tasks.size();i++) minhp.push({{tasks[i][0],tasks[i][1]},i});
        vector<int> res;
        int curr = 0;
        priority_queue<pair<pair<int,int>,int>, vector<pair<pair<int,int>,int>>, greater<pair<pair<int,int>,int>>> avaihp;

        while(minhp.size()>0 || avaihp.size()>0){
            while(minhp.size() > 0 && minhp.top().first.first <= curr ){
                int enq = minhp.top().first.first;
                int proc = minhp.top().first.second;
                int index = minhp.top().second;
                minhp.pop();
                avaihp.push({{proc,enq},index});
            }

            if(avaihp.size()>0){
                curr += avaihp.top().first.first;
                res.push_back(avaihp.top().second);
                avaihp.pop();
            }
            else curr++;
        }
        return res;
    }
};