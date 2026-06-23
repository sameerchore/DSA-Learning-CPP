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

    bool similar =true;
    void isSimilar(TreeNode*p,TreeNode*q){

        if(p==nullptr && q==nullptr)return;
        else if(q==nullptr){similar=false;return;}
        else if(p==nullptr){similar=false;return;}

        if(p->val!=q->val)similar=false;
        isSimilar(p->left,q->left);
        isSimilar(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        isSimilar(p,q);
        return similar;
    }
};