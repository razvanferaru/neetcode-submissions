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
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int goods = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; ++i){
                TreeNode* current = q.front();
                TreeNode* left = current->left, *right = current->right;
                if(left) {
                    if(left->val >= current->val) goods++;
                    else left->val = current->val;
                    q.push(current->left);
                }
                if(right) {
                    if(right->val >= current->val) goods++;
                    else right->val = current->val;
                    q.push(current->right);
                }
                q.pop();
            }
        }
        return goods;
    }
};
