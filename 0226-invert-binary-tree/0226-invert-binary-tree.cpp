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

    void recur(TreeNode* node){
        if(node==nullptr)return ;
        swap(node->left,node->right);
        recur(node->left);
        recur(node->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)return root;
        recur(root);
        return root;
    }
};