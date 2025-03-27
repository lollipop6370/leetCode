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
        ListNode *dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode *slow = dummyHead, *fast = dummyHead;
        /*移動 fast ptr n 格*/
        for(int i = 0; i < n; i++){
            if(fast->next != nullptr)
                fast = fast->next;
            else
                return dummyHead->next;
        }
        /*將 fast ptr 移動到尾端，slow 跟著動*/
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        /*刪除目標 node*/
        slow->next = slow->next->next;
        
        return dummyHead->next;
    }
};
