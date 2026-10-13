
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> arr;

        ListNode* temp = head;
        ListNode* newHead = NULL;
        ListNode* tail = NULL;

        while(temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int i = 0; i < arr.size(); i++) {
            int count = 0;

            for(int j = 0; j < arr.size(); j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            if(count == 1) {
                ListNode* newNode = new ListNode(arr[i]);

                if(newHead == NULL) {
                    newHead = newNode;
                    tail = newNode;
                }
                else {
                    tail->next = newNode;
                    tail = newNode;
                }
            }
        }

        return newHead;
    }
};

