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
    vector<int> rightSideView(TreeNode* root) {
       queue<TreeNode*>qt;
       vector<int>rightView;

       if(root==nullptr)return rightView;
       qt.push(root);

       while(!qt.empty()){
        rightView.push_back(qt.back()->val);
        int n=qt.size();
        for(int i=0;i<n;i++){
            TreeNode* node=qt.front();
            qt.pop();
            if(node->left){qt.push(node->left);}
            if(node->right){qt.push(node->right);}
        }
       }
    return rightView;
    }
};