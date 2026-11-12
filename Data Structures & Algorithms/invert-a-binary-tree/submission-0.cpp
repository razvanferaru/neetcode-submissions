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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curent = q.front();
            if(curent->left) q.push(curent->left);
            if(curent->right) q.push(curent->right);
            swap(curent->left, curent->right);
            q.pop();
        }
        return root;
    }
};
