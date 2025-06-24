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
    vector<int> ans;

    void inorder(TreeNode* node) {
        if (node == nullptr) return;  // ✅ Fix: Check for null
        inorder(node->left);
        ans.push_back(node->val);
        inorder(node->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return ans[k - 1];  // k is 1-based
    }
};
