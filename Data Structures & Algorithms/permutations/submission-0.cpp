class Solution {
public:
    void backtrack(vector<int>& nums,vector<int>& curr,vector<bool>& used,vector<vector<int>>& ans){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            curr.push_back(nums[i]);
            used[i] = true;
            backtrack(nums,curr,used,ans);
            curr.pop_back();
            used[i]=false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(),false);
        backtrack(nums,curr,used,ans);
        return ans;
    }
};
