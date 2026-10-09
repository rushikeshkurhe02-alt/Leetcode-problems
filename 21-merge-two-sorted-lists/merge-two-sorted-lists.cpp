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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL ){
            return list2;
        }
        if(list2 == NULL ){
            return list1;
        }
       
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        vector<int> arr1, arr2;

         temp1 = list1;
          temp2 = list2;

while (temp1 != nullptr) {
    arr1.push_back(temp1->val);
    temp1 = temp1->next;
}

while (temp2 != nullptr) {
    arr2.push_back(temp2->val);
    temp2 = temp2->next;
}


vector<int> arr3;

int i = 0, j = 0;

while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] <= arr2[j]) {
        arr3.push_back(arr1[i]);
        i++;
    } else {
        arr3.push_back(arr2[j]);
        j++;
    }
}

while (i < arr1.size()) {
    arr3.push_back(arr1[i]);
    i++;
}

while (j < arr2.size()) {
    arr3.push_back(arr2[j]);
    j++;
}
ListNode* newHead = nullptr;
ListNode* temp = nullptr;

for (int i = 0; i < arr3.size(); i++) {
    ListNode* newNode = new ListNode(arr3[i]);

    if (newHead == nullptr) {
        newHead = newNode;
        temp = newNode;
    } else {
        temp->next = newNode;
        temp = temp->next;
    }
}

return newHead;
    }
};