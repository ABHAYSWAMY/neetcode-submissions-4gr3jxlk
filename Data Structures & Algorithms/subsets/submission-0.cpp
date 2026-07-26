class Solution {
public:

    void backtrack(int i, vector<int>& nums, vector<int>& current, vector<vector<int>>& ans) {

      if (i == nums.size()) {
        ans.push_back(current);
        return;
      }
      else {
        // TAKE nums[i]
        current.push_back(nums[i]);
        backtrack(i + 1, nums, current, ans);

        // UNDO the previous choice
        current.pop_back();

        // DON'T TAKE nums[i]
        backtrack(i + 1, nums, current, ans);
      }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        int i = 0;
        backtrack(i,nums,current,ans);
        return ans;
    }
};
