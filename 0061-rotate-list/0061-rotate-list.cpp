class Solution {
public:
    int getLength(ListNode* head) {
        int l = 0;
        while (head) {
            l++;
            head = head->next;
        }
        return l;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int l = getLength(head);
        k %= l;
        if (k == 0) return head;

        // Step 1: Find the (l - k - 1)th node
        ListNode* curr = head;
        for (int i = 1; i < l - k; i++) {
            curr = curr->next;
        }

        // Step 2: Detach and rotate
        ListNode* newHead = curr->next;
        curr->next = nullptr;

        // Step 3: Go to the end of new head and attach original head
        ListNode* tail = newHead;
        while (tail->next) 
        {
            tail = tail->next;
        }
        tail->next = head;

        return newHead;
    }
};
