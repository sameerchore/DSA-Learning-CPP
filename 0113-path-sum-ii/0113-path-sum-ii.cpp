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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>sum;
        pathDFS(root,targetSum,0,ans,sum);
        return ans;
    }


    void pathDFS(TreeNode*root,int target,int tot, vector<vector<int>>&ans, vector<int>sum){

        if(!root)return;
        tot+=root->val;
        sum.push_back(root->val);
        if(target==tot){
            if(!root->left && !root->right){
            ans.push_back(sum);return ;}
        }
        
        pathDFS(root->left,target,tot,ans,sum);
        pathDFS(root->right,target,tot,ans,sum);
    }
};