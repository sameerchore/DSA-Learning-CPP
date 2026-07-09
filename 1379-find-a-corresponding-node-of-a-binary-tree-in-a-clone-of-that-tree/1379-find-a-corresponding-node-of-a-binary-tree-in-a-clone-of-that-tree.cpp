/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int recur(TreeNode* node,TreeNode* target,int &val){
        if(node==target){val=node->val;}
        if(node->left){
            recur(node->left,target,val);
        }
        if(node->right){
            recur(node->right,target,val);
        }
        return val;
    }
    TreeNode* rev(TreeNode* node,int t,TreeNode*& res){

            cout<<node->val<<" ";
        if(node->left)rev(node->left,t,res); 
        if(node->right)rev(node->right,t,res);
        if(node->val==t){
            cout<<"hi";
            res=node;}
        return res;
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val=0;
        int t=recur(original,target,val);
        TreeNode* res=nullptr;
        rev(cloned,t,res);
        return res;
    }
};