class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int totalsum = accumulate(nums.begin(),nums.end(),0);
        if(abs(target)>totalsum) return 0;
        int width = 2*totalsum + 1;
        int offset = totalsum;
        vector<vector<int>> dp(n+1,vector<int>(width,0));
        dp[0][offset] = 1;
        for(int i=1;i<=n;i++){
            for(int sum=-totalsum;sum<=totalsum;sum++){
                int index = sum + offset;
                if(dp[i-1][index]==0) continue;
                int plussum = sum + nums[i-1];
                dp[i][offset+plussum] += dp[i-1][index];
                int minussum = sum - nums[i-1];
                dp[i][offset+minussum] += dp[i-1][index];
            }
        }
        return dp[n][target+offset];
    }
};
