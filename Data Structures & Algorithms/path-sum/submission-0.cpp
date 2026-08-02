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
    bool check(TreeNode* root,int& curr,int& targetSum){
        if(root==NULL) return false;
        curr += root->val;
        if(root->left==NULL && root->right==NULL){
            bool ans = (curr==targetSum);
            curr -= root->val; 
            return ans;
        }
        if(check(root->left,curr,targetSum)) return true;
        if(check(root->right,curr,targetSum)) return true;
        curr -= root->val;
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int curr = 0;
        return check(root,curr,targetSum);
    }
};