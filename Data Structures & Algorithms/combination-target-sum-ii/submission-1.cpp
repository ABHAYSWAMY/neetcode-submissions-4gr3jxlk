class Solution {
public:
    void backtrack(int i,int target,vector<int>& candidates,vector<int>& curr,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(i==candidates.size() || target<0){
            return;
        }
        curr.push_back(candidates[i]);
        backtrack(i+1,target-candidates[i],candidates,curr,ans);
        curr.pop_back();
        while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
            i++;
        }
        backtrack(i+1,target,candidates,curr,ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        backtrack(0,target,candidates,curr,ans);
        return ans;
    }
};
