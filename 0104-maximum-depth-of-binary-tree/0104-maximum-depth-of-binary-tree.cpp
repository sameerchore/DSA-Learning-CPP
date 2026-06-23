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
    int sum=1;
    int depth=0;
    void recurT(TreeNode* node,int sum){
        if(node==nullptr){
            depth=max(depth,sum-1);
            sum--;
            return;
        }
        sum+=1;
        recurT(node->left,sum);
        recurT(node->right,sum);
    }
    int maxDepth(TreeNode* root) {
        recurT(root,sum);
        return depth;
    }
};