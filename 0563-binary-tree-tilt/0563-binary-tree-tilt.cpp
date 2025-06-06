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
    
    int DFS(TreeNode* node , int&ans)
     {
        if(!node) return 0;

        int l = DFS(node->left,ans);
        int r = DFS(node->right,ans);
        
        ans = ans + abs(l-r); // formula

        return l+r+node->val;
     }
    int findTilt(TreeNode* root) {
        int ans=0;
        DFS(root, ans);
        return ans;
    }
};