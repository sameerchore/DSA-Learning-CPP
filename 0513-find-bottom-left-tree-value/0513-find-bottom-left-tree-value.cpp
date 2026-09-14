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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>qt;
        qt.push(root);
        int ele=0;
        while(!qt.empty()){
            ele=qt.front()->val;
            int n=qt.size();
            for(int i=0;i<n;i++){
                TreeNode* node =qt.front();
                qt.pop();
                if(node->left){qt.push(node->left);}
                if(node->right){qt.push(node->right);}
            }
        }
        return ele;
    }       
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna