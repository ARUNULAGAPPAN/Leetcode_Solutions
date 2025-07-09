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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return nullptr;
        ListNode* before = new ListNode(0);
        ListNode* after = new ListNode(0);

        ListNode* bptr = before;
        ListNode* aptr = after;

        while(head){
            if(head->val < x)
            {
                bptr->next = head;
                bptr = bptr->next;
            }
            else
            {
                aptr->next = head;
                aptr = aptr->next;
            }
            head = head->next;
        }
        aptr->next = nullptr;
        bptr->next = after->next;
        return before->next;
    }
};