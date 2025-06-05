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
    int currentVal;
    int currentCount = 0;
    int maxCount = 0;

    void handleValue(int val) {
        if (val != currentVal) {
            currentVal = val;
            currentCount = 0;
        }
        currentCount++;

        if (currentCount > maxCount) {
            maxCount = currentCount;
            ans = {val};  // new mode
        } else if (currentCount == maxCount) {
            ans.push_back(val);  // another mode
        }
    }

    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        handleValue(root->val);
        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        if (!root) return {};
        currentVal = root->val;
        inorder(root);
        return ans;
    }
};
