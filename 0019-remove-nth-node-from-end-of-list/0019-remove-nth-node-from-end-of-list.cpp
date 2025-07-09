class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        if (!fast) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* d = slow->next;
        slow->next = slow->next->next;
        delete d;
        return head;
    }
};
