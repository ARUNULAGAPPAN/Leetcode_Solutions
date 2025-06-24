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
    vector<vector<int>> allPaths;
    void solve(TreeNode* node, vector<int> &path, int targetSum){
        if(node == NULL) return;
        path.push_back(node->val);
        if(!node->left && !node->right){
            if(targetSum == node->val){
                allPaths.push_back(path);
            }
        }
        solve(node->left, path, targetSum - node->val);
        solve(node->right, path, targetSum - node->val);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        solve(root, path, targetSum);
        return allPaths;
    }
};