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
    bool isBal(TreeNode* root,int* h){
        if(!root) return true;
        int lh=0,rh=0;
        if(isBal(root->left,&lh)==false) return false;
        if(isBal(root->right,&rh)==false) return false;
        *h=1+max(rh,lh);
        if(abs(lh-rh)<=1) return true;
        return false;
    }
    bool isBalanced(TreeNode* root) {
        int h=0;
        return isBal(root,&h);
    }
};
