class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minhp;
        for(int i=0;i<nums.size();i++) minhp.push({nums[i],i});
        int x = k;
        while(x>0 && minhp.size() > 0){
            int a = minhp.top().second;
            int b = minhp.top().first * multiplier;
            minhp.pop();
            nums[a] = b;
            minhp.push({b,a});
            x--;
        }
        return nums;
    }
};