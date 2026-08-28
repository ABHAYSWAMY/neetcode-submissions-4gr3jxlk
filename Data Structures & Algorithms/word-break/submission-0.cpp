class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        unordered_set<string> dict;
        for(string str : wordDict) dict.insert(str);
        vector<bool> dp(n+1,false);
        dp[0] = true;
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                string res = s.substr(j,i-j);
                if(dp[j]==true && dict.count(res)){
                    dp[i] = true;
                }
            }
        }
        return dp[n];
    }
};
