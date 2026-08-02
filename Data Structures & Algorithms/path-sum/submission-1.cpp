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
            if(curr==targetSum) return true;
            else{
                curr -=root->val;
                return false;
            }
        }
        if(check(root->left,curr,targetSum)) return true;
        if(check(root->right,curr,targetSum)) return true;//if any of above two conditions are true, no need to backtrack curr
        curr -= root->val; //if both are wrong, then we need to backtrack
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int curr = 0;
        return check(root,curr,targetSum);
    }
};