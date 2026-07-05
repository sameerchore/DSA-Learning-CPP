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
int sum=0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){return false; }
        sum+=root->val;
        bool l=false;
        bool r=false;
        if(root->left){l=hasPathSum(root->left,targetSum);}
        if(l==true)return true;

        if(root->right){r=hasPathSum(root->right,targetSum);}
        if(l==true)return true;

        bool leafNode=(!root->left && !root->right)? true:false;
        if(sum==targetSum && leafNode )return true;
        else{sum-=root->val;}
        return l||r;
    }
};