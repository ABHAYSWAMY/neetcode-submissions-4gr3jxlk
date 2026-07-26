class Solution {
public:
    void backtrack(int i,int target,vector<int>& nums,vector<int>& curr,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(i==nums.size() || target < 0){
            return;
        }
        curr.push_back(nums[i]);
        backtrack(i,target-nums[i],nums,curr,ans);
        curr.pop_back();
        backtrack(i+1,target,nums,curr,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(0,target,nums,curr,ans);
        return ans;
    }
};
