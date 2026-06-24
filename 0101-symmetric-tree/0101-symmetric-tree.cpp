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
    bool isSymChecker(TreeNode* x,TreeNode* y){
        if(x==nullptr || y==nullptr)return x==y;
        if(x->val!=y->val)return false;
        return isSymChecker(x->left,y->right) && isSymChecker(x->right,y->left);  
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return false;
        return isSymChecker(root->left,root->right);
    }
};