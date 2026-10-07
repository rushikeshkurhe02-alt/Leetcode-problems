class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* curr = head;

while (curr != NULL)
{
    if (pre != NULL && pre->val == curr->val)
    {
        pre->next = curr->next;
        delete curr;
        curr = pre->next;
    }
    else
    {
        pre = curr;
        curr = curr->next;
    }
}
        return head;
    }
};