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
    ListNode* removeElements(ListNode* head, int val) {

        while(head !=NULL && head -> val == val){
            ListNode *temp  = head;
            head = head->next;
            delete temp;
            
        }
        
    
        ListNode *curr = head;
        ListNode *pre = head;

        while(curr != NULL ){
            if((curr->val) == val){
                pre->next = curr->next;
                delete curr;
                curr = pre->next;
            }else{

            
             pre = curr;
            curr=curr->next;

            }
        
        }
        return head;
    }
};