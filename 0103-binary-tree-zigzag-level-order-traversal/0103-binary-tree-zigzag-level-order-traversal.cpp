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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr)return res;
        res.push_back({root->val});
        if(!root->right && !root->left)return res;
        queue<TreeNode*>qt;
        qt.push(root);
        bool fg=false;
        while(!qt.empty()){
            vector<int>ans={};
            int size=qt.size();
            for(int i=0;i<size;i++){
            TreeNode* node=qt.front();
            qt.pop();
               if(node->left){qt.push(node->left);ans.push_back(node->left->val);}
               if(node->right){qt.push(node->right);ans.push_back(node->right->val);} 
            }
            if(!ans.empty()){
            fg=!fg;
            if(fg){reverse(ans.begin(),ans.end());}
            res.push_back(ans);
            }

        }
        return res;
    }
};