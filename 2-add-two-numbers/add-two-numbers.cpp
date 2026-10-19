class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
vector<int> arr1;
vector<int> arr2;

    ListNode* temp1 = l1;
    ListNode* temp2 = l2;

    while(temp1 != nullptr) {
        arr1.push_back(temp1->val);
        temp1 = temp1->next;
    }

    while(temp2 != nullptr) {
        arr2.push_back(temp2->val);
        temp2 = temp2->next;
    }

    vector<int> result;

    int i = 0;
    int j = 0;
    int carry = 0;

    while(i < arr1.size() || j < arr2.size() || carry > 0) {
        int sum = carry;

        if(i < arr1.size()) {
            sum += arr1[i];
            i++;
        }

        if(j < arr2.size()) {
            sum += arr2[j];
            j++;
        }

        result.push_back(sum % 10);
        carry = sum / 10;
    }

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for(int i = 0; i < result.size(); i++) {
        ListNode* newNode = new ListNode(result[i]);

        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}


};
