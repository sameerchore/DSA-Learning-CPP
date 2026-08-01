/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        int cnt=0;
        int val=-1;
        Node* temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        cnt-=k-1;
        int i=1;
        while(temp){
            if(i==cnt){val=temp->data;}
            temp=temp->next;
            i++;
        }
        return val;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna