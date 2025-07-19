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
     int pindex ;
     unordered_map<int,int>map;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        pindex=0;
        for(int i=0;i<inorder.size();i++)
        {
            map[inorder[i]] = i;
        }
        return build(preorder , 0 , inorder.size()-1);
    }
    TreeNode* build (vector<int>& preorder , int s , int e)
    {
        if( s > e) return nullptr;

        int rootval = preorder[pindex++];
        TreeNode* root = new TreeNode(rootval);
        int mid = map[rootval];
        root->left = build(preorder, s, mid-1);
        root->right = build(preorder , mid+1, e);
        return root;
    }
};