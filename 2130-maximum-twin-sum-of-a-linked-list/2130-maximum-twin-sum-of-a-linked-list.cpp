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
    int pairSum(ListNode* head) {

        auto mid = [](ListNode* head)->ListNode* {

            ListNode* slow = head;
            ListNode* fast = head;

            while(fast && fast->next) {

                slow = slow->next;
                fast = fast->next->next;
            }

            return slow;
        };

        auto reverse = [](ListNode* head)->ListNode* {

            ListNode* prev = nullptr;
            ListNode* next = nullptr;
            ListNode* temp = head;

            while(temp) {

                next = temp->next;
                temp->next = prev;
                prev = temp;
                temp = next;
            }

            return prev;
        };

        int ans = 0;

        ListNode* m = mid(head);

        ListNode* rev = reverse(m);

        while(rev) {

            ans = max(ans, head->val + rev->val);

            head = head->next;
            rev = rev->next;
        }

        return ans;
    }
};