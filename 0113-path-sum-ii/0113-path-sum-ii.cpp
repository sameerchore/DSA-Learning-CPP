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



//Optimal Solution 
void dfs(...) {
    // Make a choice
    path.push_back(x);

    dfs(...);
    dfs(...);

    // Undo the choice
    path.pop_back();
}
// THis is the flow of the ans for path sum 
// here we pop back becoz apn ata leaf vr ah tri trgetsum achive nh zhl so pop ani return kru



//Another approch is by subtracting fform targetsum and if targetsum==0 push the patht to ans vector
//global vector used and pop used to trace back
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;

    void dfs(TreeNode* root, int sum) {
        if (!root) return;

        cur.push_back(root->val);
        sum -= root->val;

        if (!root->left && !root->right && sum == 0)
            ans.push_back(cur);

        dfs(root->left, sum);
        dfs(root->right, sum);

        cur.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
};
