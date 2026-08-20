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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        // if(!head || !head->next)return {head};

        ListNode* temp=head;
        int cnt=0;

        while(temp){
            cnt++;
            temp=temp->next;
        }

        temp=head;
        int pair=cnt/k;
        int oddCnt=cnt%k;
        int oddPair=(oddCnt>0)? pair+1 :0;
        int i=1;
        int partition=1;
        ans.push_back(head);

        while(temp){
            if(oddCnt!=0 && i==oddPair){
                    ListNode* nxt=temp->next;
                    temp->next=nullptr;
                    if(temp)ans.push_back(nxt);
                    temp=nxt;
                    i=0;
                    oddCnt--;
                    partition++;
                }
                else if(i==pair && oddCnt==0){
                     ListNode* nxt=temp->next;
                    temp->next=nullptr;
                    temp=nxt;
                    if(temp){ans.push_back(nxt);
                    partition++;}
                    i=0;
                }
                else{temp=temp->next;}
                i++;
            
        }
        while(partition<k){
            ans.push_back(nullptr);
            partition++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna