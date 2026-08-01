class Solution {
public:
    bool backtrack(int index,int& target,vector<int>& buckets,vector<int>& matchsticks){
        if(index==matchsticks.size()) return true;
        for(int i=0;i<buckets.size();i++){
            if(buckets[i]+matchsticks[index]>target) continue;
            buckets[i] += matchsticks[index];
            if(backtrack(index+1,target,buckets,matchsticks)) return true;
            buckets[i] -= matchsticks[index];
            if(buckets[i]==0) break;
        }
        return false;
    }

    bool makesquare(vector<int>& matchsticks) {
        int sum = accumulate(matchsticks.begin(),matchsticks.end(),0);
        if(sum%4!=0) return false;
        int target = sum/4;
        sort(matchsticks.rbegin(),matchsticks.rend());
        if(matchsticks[0]>target) return false;
        vector<int> buckets(4,0);
        return (backtrack(0,target,buckets,matchsticks));
    }
};