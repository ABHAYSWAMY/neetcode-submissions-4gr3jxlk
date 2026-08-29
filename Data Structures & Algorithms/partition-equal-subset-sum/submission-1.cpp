class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        int target = sum/2;
        vector<vector<bool>> dp(n+1,vector<bool>(target+1,false));
        for(int i=0;i<n+1;i++) dp[i][0] = true;
        for(int i=1;i<n+1;i++){
            for(int s=1;s<target+1;s++){
                dp[i][s] = dp[i-1][s];
                if(nums[i-1]<=s) dp[i][s] = dp[i][s] || dp[i-1][s-nums[i-1]];
            }
        }
        return dp[n][target];
    }
};
