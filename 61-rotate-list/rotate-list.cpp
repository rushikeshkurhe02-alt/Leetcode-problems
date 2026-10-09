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
    ListNode* rotateRight(ListNode* head, int k) {
        //count linst

        int count = 0;
        if(head == NULL || head->next == NULL){
        return head;
}
        ListNode *temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        k = k % count;
         if(k == 0){
            return head;
         }
        ListNode *curr = head;
        ListNode *pre = NULL;
        // int steps = count - k;
        count = count - k;
         while(count--){
            pre = curr;
            curr = curr->next;
        }
            pre->next = NULL;
            ListNode *tail = curr;

            while(tail->next != NULL){
                tail = tail->next;
            }
            tail->next = head;
            head = curr;
            return head;
        
    }
};