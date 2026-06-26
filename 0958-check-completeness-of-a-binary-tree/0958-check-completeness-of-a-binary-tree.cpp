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

    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int h=0;
        int totN=0;
        int null=0;
        while(q.empty()!=true){
            int size=q.size();
            totN = totN+size;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                TreeNode* l=node->left;
                TreeNode* r=node->right;
                q.pop();

                if(l){q.push(l);}
                if(r){q.push(r);}

                if((l||r)&& null>0)return false;

                if(!l && r)return false;
                else if(!l || !r){null++;}


            }
            h++;
            if(pow(2,h-1)>totN)return false;
        }
        return true;
    }
};