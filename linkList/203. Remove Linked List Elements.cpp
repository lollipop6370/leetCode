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
        ListNode* dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode* previous = dummyHead;

        while(head != NULL){
            if(head->val == val){
                previous->next = head->next;
                head = head->next;
            }
            else{
                previous = head;
                head = head->next;
            }
        }
        return dummyHead->next;
    }
};
