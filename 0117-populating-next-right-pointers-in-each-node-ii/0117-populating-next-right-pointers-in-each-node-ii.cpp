/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
    if(!root)return root;
        queue<Node*>qt;
        qt.push(root);
        Node *temp=nullptr;
        while(!qt.empty()){
            int n=qt.size();
            for(int i=0;i<n;i++){
                Node *node=qt.front();
                qt.pop();
                if(node->left){
                    qt.push(node->left);
                    if(temp){temp->next=node->left;}
                    temp=node->left;
                }
                if(node->right){
                    qt.push(node->right);
                    if(temp){
                        temp->next=node->right;
                    }
                    temp=node->right;
                }
            }
            temp=nullptr;
        }
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna