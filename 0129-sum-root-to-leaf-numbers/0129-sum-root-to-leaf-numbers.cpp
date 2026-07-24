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
    int sumNumbers(TreeNode* root) {
        long long ans=0;
        long long tot=0;
        sum(root,ans,tot);
        return tot;
    }
    int sum(TreeNode* root,long long ans,long long &tot){
        ans=ans*10+root->val;
        if(!root->left && !root->right){
            tot+=ans;
            return 0;
        }
        if(root->left)sum(root->left,ans,tot);
        if(root->right)sum(root->right,ans,tot);
        return tot;
    }
};