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
    void inorder(TreeNode* node, vector<int>&nums)
    {
        if(!node) return;
        inorder(node->left, nums);
        nums.push_back(node->val);
        inorder(node->right, nums);
    }
    bool findTarget(TreeNode* root, int k) {
     vector<int>nums;
     inorder(root, nums);
     unordered_map<int,int>map;
     for(int i=0;i<nums.size();i++)
     {
        int c = k - nums[i];
        if(map.count(c))
        {
            return true;
        }
        map[nums[i]]=i;
     }
     return false;

    }
};