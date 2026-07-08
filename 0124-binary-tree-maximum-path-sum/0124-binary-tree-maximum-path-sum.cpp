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
    
    int maxi=INT_MIN;
    int maxPathSum(TreeNode* root) {
      recur(root);  
      return maxi;
    }
    int recur(TreeNode* root){
        if(root==nullptr)return 0;
        int l=max(0,recur(root->left));
        int r=max(0,recur(root->right));
        int sum=max({l,r})+root->val;
        maxi=max({maxi,l+r+root->val,root->val,sum});
        return sum;


    }
};