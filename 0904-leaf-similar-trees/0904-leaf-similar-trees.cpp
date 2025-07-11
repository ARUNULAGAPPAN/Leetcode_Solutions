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
   void collectLeafValues(TreeNode* root, vector<int>&l){
    if(!root) return;
    if(!root->right && !root->left){
        l.push_back(root->val);
        return;
    }
    collectLeafValues(root->left,l);
    collectLeafValues(root->right,l);
   }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>l1,l2;
        collectLeafValues(root1,l1);
        collectLeafValues(root2,l2);
        return l1==l2;
    }
};