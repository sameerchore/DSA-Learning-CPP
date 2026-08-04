/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root) {
        if(!root)return 0;
        int cnt=dfs(root);
        return cnt-1;
    }
    
    int dfs(Node* root) {
        if(!root)return 0;
        int l=dfs(root->left);
          int r=dfs(root->right);
        return 1+max(l,r);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna