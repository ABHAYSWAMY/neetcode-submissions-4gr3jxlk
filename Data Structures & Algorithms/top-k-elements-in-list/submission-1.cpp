class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> res;
        for(int num : nums) mp[num]++;
        priority_queue<pair<int,int>> q;
        for(auto m : mp) q.push({m.second,m.first});
        while(!q.empty() && k>0){
            res.push_back(q.top().second);
            q.pop();
            k--;
        }
        return res;
    }
};
