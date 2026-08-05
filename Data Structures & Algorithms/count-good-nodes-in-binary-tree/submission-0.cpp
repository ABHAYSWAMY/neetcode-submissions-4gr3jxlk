/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int dfs(TreeNode* root,int maxtillnow){
        if(root==NULL) return 0;
        int good = 0;
        if(root->val>=maxtillnow) good = 1;
        maxtillnow = max(maxtillnow,root->val);
        return good+dfs(root->left,maxtillnow)+dfs(root->right,maxtillnow);
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};
