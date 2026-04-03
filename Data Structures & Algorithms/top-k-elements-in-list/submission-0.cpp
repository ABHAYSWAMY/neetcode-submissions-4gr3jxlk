class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        map<int,vector<int>> mp2;
        for(auto s : mp) mp2[s.second*-1].push_back(s.first);
        vector<int> result;
        for(auto [freq,values] : mp2){
            for(int x : values){
                result.push_back(x);
                if(result.size()==k) return result;
            }
        } return result;
    }
};
