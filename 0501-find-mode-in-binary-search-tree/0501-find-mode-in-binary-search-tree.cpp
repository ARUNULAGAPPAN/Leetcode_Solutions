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
 vector<int>ans; int val=INT_MIN; int f=0,maxf=0;
  void inorder(TreeNode* node)
  {
    if(node == nullptr)
       return;

       inorder(node->left);
         if(val==node->val)
         {
            f++;
         }
         else
       {
        val = node->val;
        f=1;
       }
       

       if(f > maxf)
       {
        maxf=f;
        ans={node->val};
       }
       else if(f == maxf)
       {
        ans.push_back(node->val);
       }
       inorder(node->right);
  }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};