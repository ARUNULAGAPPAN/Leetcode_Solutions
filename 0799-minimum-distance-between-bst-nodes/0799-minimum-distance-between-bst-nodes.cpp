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
  int ans=INT_MAX;
  int n=-1;
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
    void inorder(TreeNode* node)
    {
        if(!node) return;
        inorder(node->left);
          if(n!=-1)
             ans = min(ans,abs(node->val-n));
         n=node->val;
        inorder(node->right);
    }
};