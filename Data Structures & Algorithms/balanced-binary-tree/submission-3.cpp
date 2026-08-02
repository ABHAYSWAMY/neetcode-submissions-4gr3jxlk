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
    void check_height(TreeNode* root,int& curr,int& max_depth){
        if(root==NULL) return;
        curr++;
        max_depth = max(curr,max_depth);
        check_height(root->left,curr,max_depth);
        check_height(root->right,curr,max_depth);
        curr--;
    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int left=0,right=0,currl=0,currr=0;
        check_height(root->left,currl,left);
        check_height(root->right,currr,right);
        if (abs(right-left)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
