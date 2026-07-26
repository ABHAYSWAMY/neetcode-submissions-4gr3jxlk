class Solution {
public:
    void backtrack(int i,int k,int n,vector<int>& curr,vector<vector<int>>& ans){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        if (curr.size() + (n - i) < k) return;
        if(i==n) return;

        curr.push_back(i+1);
        backtrack(i+1,k,n,curr,ans);
        curr.pop_back();
        backtrack(i+1,k,n,curr,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(0,k,n,curr,ans);
        return ans;
    }
};