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
    void dfs(TreeNode* node, set<int>&s)
    {
        if(!node) return;
        dfs(node->left,s);
        s.insert(node->val);
        dfs(node->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        vector<int>nums;
        dfs(root,s);
        for(auto& i: s)
        {
            nums.push_back(i);
        }
        return nums.size()>1 ? nums[1] : -1;
    }
};