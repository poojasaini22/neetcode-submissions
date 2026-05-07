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
    int res=0;
    int diameterOfBinaryTree(TreeNode* root) {
        heightofnode(root);
        return res;
    }
    int heightofnode(TreeNode* curr){
        if(curr==nullptr){
            return 0;
        }
            int left=heightofnode(curr->left);
            int right=heightofnode(curr->right);
            res=max(res,left+right);
            return 1+max(left,right);
        
    }
};
