class Solution {
public:
    void backtrack(int i, vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        //the intuition is that the branch which rejects current number is made sure that
        //it keeps getting rejected until duplicate numbers are over
        //as accepted branch's rejected branch represents the rejected branch's accepted branch 
        curr.push_back(nums[i]);
        backtrack(i+1,nums,curr,ans);
        curr.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
        backtrack(i+1,nums,curr,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int i = 0;
        backtrack(i,nums,curr,ans);
        return ans;
    }
};
