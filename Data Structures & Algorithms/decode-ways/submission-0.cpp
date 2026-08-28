class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n==0) return 0;
        if(s[0]=='0') return 0;
        vector<int> dp(n+1,0);
        dp[0] = 1; //empty string given 1 as base case
        dp[1] = 1;//first character given weight as 1
        for(int i=2;i<=n;i++){
            if(s[i-1]!='0') dp[i] += dp[i-1];
            int twodigits = stoi(s.substr(i-2,2));
            if(twodigits>=10 && twodigits<=26) dp[i] += dp[i-2];
        }
        return dp[n];
    }
};
