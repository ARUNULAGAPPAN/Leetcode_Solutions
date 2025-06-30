class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* odd = head;                // same as your "head"
        ListNode* even = head->next;
        ListNode* evenStart = even;         // your version of "newh"

        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenStart;
        return head;
    }
};
