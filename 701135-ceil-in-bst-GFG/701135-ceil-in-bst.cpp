/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int findCeil(Node* root, int x) {
              int ceil=-1;
            while(root){
                if(root->data==x){
                    ceil=x;break;
                }
                else if(root->data>x){
                    ceil=root->data;
                    root=root->left;
                }
                else{root=root->right;}
            }
            return ceil;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna