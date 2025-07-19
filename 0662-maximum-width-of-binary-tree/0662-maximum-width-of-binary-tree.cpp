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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int m=0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int size = q.size();
            unsigned long long start = q.front().second;
            unsigned long long end = q.back().second;

             m = max ( m ,int(end-start+1));

            for(int i=0;i<size;i++)
            {
                auto[n,x] = q.front();q.pop();
                x = x - start;
                if(n->left) q.push({n->left, 2*x+1});
                if(n->right) q.push({n->right, 2*x+2});
            }
        }
        return m;
    }
};