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
     int ans =0;
    int DFS(TreeNode* node)
     {
        if(!node) return 0;

        int l = DFS(node->left);
        int r = DFS(node->right);
        
        ans = ans + abs(l-r); // formula

        return l+r+node->val;
     }
    int findTilt(TreeNode* root) {
        DFS(root);
        return ans;
    }
};