class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root) return {}; // If root is null, return an empty vector
        vector<int> ans;

        stack<TreeNode*> s;
        s.push(root);

        while (!s.empty()) {
            TreeNode* n = s.top();
            s.pop();
            ans.push_back(n->val);

            
            if (n->right) s.push(n->right);
            if (n->left) s.push(n->left);
        }
        return ans;
    }
};