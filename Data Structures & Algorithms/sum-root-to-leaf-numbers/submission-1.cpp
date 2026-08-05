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
    int dfs(int curr,TreeNode* root){
        if(root==NULL) return 0;
        curr = curr*10 + root->val;
        if(root->left==NULL && root->right==NULL) return curr;
        return dfs(curr,root->left) + dfs(curr,root->right);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(0,root);
    }
};