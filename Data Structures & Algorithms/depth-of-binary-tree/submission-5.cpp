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
    int maxDepth(TreeNode* root) {
    //     queue<TreeNode*> q;
    //     if (root!=nullptr){
    //         q.push(root);
    //     }
    //     int level=0;
    //     while(!q.empty()){
    //         int size=q.size();
    //         for(int i=0;i<size;i++){
    //               TreeNode* node=q.front();
    //             q.pop();
    //             if(node->left!=nullptr){
    //                 q.push(node->left);
    //             }
    //             if(node->right!=nullptr){
    //                 q.push(node->right);
    //             }
    //         }
    //         level++;
    //     }
    //     return level;
    stack<pair<TreeNode*,int>> stack;
    if(root!=nullptr){
        stack.push({root,1});
    }
    int res=0;
    while(!stack.empty()){
        pair<TreeNode*,int> current=stack.top();
        stack.pop();
        TreeNode* node=current.first;
        int depth=current.second;
        res=max(res,depth);
        if(node->left!=nullptr){
            stack.push({node->left,depth+1});
        }
        if(node->right!=nullptr){
            stack.push({node->right,depth+1});
        }
    }
    return res;
    }
};




