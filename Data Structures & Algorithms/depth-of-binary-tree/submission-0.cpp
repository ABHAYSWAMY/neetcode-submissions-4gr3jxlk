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
    void depth(TreeNode* root,int& curr,int& maxx){
        if(root==NULL) return;
        curr++;
        maxx = max(maxx,curr);
        depth(root->left,curr,maxx);
        depth(root->right,curr,maxx);
        curr--;
    }

    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int curr=0,maxx=0;
        depth(root,curr,maxx);
        return maxx;
    }
};
