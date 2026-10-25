
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr) return nullptr;

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* fut = nullptr;

        int c = k;

        while (curr != nullptr && c > 0) {
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
            c--;
        }

        if (curr == nullptr && c > 0) {
            curr = prev;
            prev = nullptr;
            fut = nullptr;

            while (curr != nullptr) {
                fut = curr->next;
                curr->next = prev;
                prev = curr;
                curr = fut;
            }
        }

        if (c > 0) {
            return prev;
        } else {
            head->next = reverseKGroup(curr, k);
        }

        return prev;
    }
};

