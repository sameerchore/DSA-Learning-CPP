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
        Node* temp=nullptr;
       queue<Node*>qt;
       qt.push(root);
       while(!qt.empty()){
        int n=qt.size();
        for(int i=0;i<n;i++){
            Node* node=qt.front();
            qt.pop();
            if(node->left){
                qt.push(node->left);
                if(temp){
                    temp->next=node->left;
                    node->left->next=node->right;
                }
                else{node->left->next=node->right;}
            }
            if(node->right){
                qt.push(node->right);
                temp=node->right;
            }
        }
        temp=nullptr;
       }
       return root;
    }
};


//Optimal iwht space com:; O(1) by traversing next pointer
class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;

        Node* leftmost = root;

        while (leftmost->left) {

            Node* curr = leftmost;

            while (curr) {

                // Connect left child to right child
                curr->left->next = curr->right;

                // Connect right child to next node's left child
                if (curr->next) {
                    curr->right->next = curr->next->left;
                }

                curr = curr->next;
            }

            // Move to next level
            leftmost = leftmost->left;
        }

        return root;
    }
};
