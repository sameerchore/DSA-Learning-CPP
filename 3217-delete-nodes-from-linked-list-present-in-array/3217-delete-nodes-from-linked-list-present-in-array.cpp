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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        ListNode* temp=head;
        ListNode* prev=nullptr;
        unordered_set<int>hash(nums.begin(),nums.end());

        while(temp){
            if(hash.find(temp->val)!=hash.end()){
                if(temp==head){head=head->next;}
                else{prev->next=temp->next;}
            }
            else{prev=temp;}
            temp=temp->next;  
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna