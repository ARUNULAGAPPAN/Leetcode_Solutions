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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    ListNode* floyed(ListNode* L, ListNode* R) {
        ListNode* slow = L, *fast = L;

        while(fast && fast != R && fast->next && fast->next != R) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    TreeNode* sortedListToBST(ListNode* L, ListNode* R = nullptr) {
        if(L == R)
            return nullptr;

        ListNode* M = floyed(L, R);
        TreeNode* root = new TreeNode(M->val);
        root->left = sortedListToBST(L, M);
        root->right = sortedListToBST(M->next, R);
        return root;
    }
};