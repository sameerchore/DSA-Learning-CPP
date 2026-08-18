/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* temp=head->next->next;
        ListNode* prev=head->next;
        while(temp){
            if(temp->val!=0){
                prev->val+=temp->val;
                temp=temp->next;
            }
            else{
                prev->next=temp->next;
                prev=temp->next;
                if(temp->next){
                temp=(temp->next->next)? temp->next->next:nullptr;
                }
                else{temp=nullptr;}
            }
        }

        return head->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna