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
    // Reverse a linked list and return new head
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    // Get the kth node from current
    ListNode* kth(ListNode* head, int k) {
        while (head && --k) {
            head = head->next;
        }
        return head;
    }

    // Main function
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode dummy(0); // dummy node (value = 0)
        dummy.next = head;
        ListNode* prevGroupEnd = &dummy;

        while (true) {
            ListNode* kthnode = kth(prevGroupEnd->next, k);
            if (!kthnode) break;

            ListNode* groupStart = prevGroupEnd->next;
            ListNode* nextGroupStart = kthnode->next;

            kthnode->next = nullptr;

            // Reverse the group
            prevGroupEnd->next = reverse(groupStart);

            // Connect the tail of reversed group to next group
            groupStart->next = nextGroupStart;

            // Move prevGroupEnd to end of current group
            prevGroupEnd = groupStart;
        }

        return dummy.next;
    }
};
