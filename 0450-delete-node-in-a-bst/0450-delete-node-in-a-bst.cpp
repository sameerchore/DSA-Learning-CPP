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
    TreeNode* temp=nullptr;
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;
        root=dfs(root,key);
        TreeNode* node=root;
        if(!temp)return node;

        while(node->right || node->left){
            if(node->val>temp->val){
                if(!node->left){break;}
                node=node->left;
            }
            else if(node->right){
                node=node->right;
            }
            else{break;}
        }
        if(node->val>temp->val){
            node->left=temp;
        }
        else{node->right=temp;}
        return root;

    }
    TreeNode* dfs(TreeNode*root,int key){
        if(!root)return nullptr;
        root->left=dfs(root->left,key);
         root->right=dfs(root->right,key);

         if(root->val==key){
            if(root->right){
                temp=root->left;
                return root->right;
            }
            else if(root->left){
                temp=root->right;
                return root->left;
            }
            return nullptr;
         }
         return root;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna