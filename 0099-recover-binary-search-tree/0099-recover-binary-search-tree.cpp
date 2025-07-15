class Solution {
public:
    TreeNode* first = nullptr;
    TreeNode* last = nullptr;
    TreeNode* prev = nullptr;

    void recoverTree(TreeNode* root) {
        inorder(root);
        if(first && last)
            swap(first->val, last->val);
    }

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        if (prev && root->val < prev->val) {
            if (!first) {
                first = prev;
                last = root;
            } else {
                last = root;
            }
        }

        prev = root;

        inorder(root->right);
    }
};
