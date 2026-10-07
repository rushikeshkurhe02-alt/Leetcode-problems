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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode *curr = head;
         ListNode *pre = NULL;
         int count = 0;
         while(curr != NULL){
            count++;
            curr = curr->next;

         }
         curr = head;
         int k = (count - n) + 1;
         int i = 1;
        while(curr != NULL){
            if(i == k){
                if(pre == NULL){
                    head = curr->next;
                    delete curr; 
                    break;
                }
                pre->next = curr->next;
                delete curr;
                break;
            }
            pre = curr;
            i++;
            curr = curr->next;
        }
        return head;
    }
};