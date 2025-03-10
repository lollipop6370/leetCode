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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode* temp = dummyHead;
        while(temp->next != nullptr && temp->next->next != nullptr){
            ListNode* first = temp->next;
            ListNode* second = temp->next->next;
            
            first->next = second->next;
            second->next = first;
            temp->next = second;
            temp = first;
        }
        return dummyHead->next;
    }
};
