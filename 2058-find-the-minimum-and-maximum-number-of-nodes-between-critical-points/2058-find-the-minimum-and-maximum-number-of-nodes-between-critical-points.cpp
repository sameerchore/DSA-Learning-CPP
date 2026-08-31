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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int>ans(2,-1);

        if(!head->next->next)return ans;
        ListNode *temp=head;

        int minD=INT_MAX;
        int maxD=INT_MIN;
        int prev=-1;
        int i=2;
        int leftmost=0;


        while(temp->next->next){

            int a=temp->val;
            int b=temp->next->val;
            int c=temp->next->next->val;

            if((a<b && b>c) || (a>b && b<c) ){
               if(prev==-1){
                prev=i;
                leftmost=i;
               }
               else{
                minD=min(minD,abs(prev-i));
                maxD=i;
                prev=i;
               }
            }
            temp=temp->next;
            i++;
        }
        if(minD==INT_MAX || maxD==INT_MIN)return ans;
        ans[0]=minD;
        ans[1]=maxD-leftmost;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna