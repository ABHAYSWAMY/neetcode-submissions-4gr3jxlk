class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int curr = 0,count = 0;
        for(int x : nums){
            curr+=x;
              if(mp.count(curr-k)) count+=mp[curr-k];
            mp[curr]++;
        } return count;
    }
};