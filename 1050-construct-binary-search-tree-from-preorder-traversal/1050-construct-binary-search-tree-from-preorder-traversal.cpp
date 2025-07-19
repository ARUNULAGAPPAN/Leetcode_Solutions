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
int pind ;
unordered_map<int, int>map;
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder = preorder;
        ranges::sort(inorder);
        for(int i=0;i<inorder.size();i++)
        {
            map[inorder[i]] = i;
        }
     return   build(preorder, 0, inorder.size()-1);
    }
    TreeNode* build(vector<int>& preorder, int s , int e)
    {
        if(s > e) return nullptr;

        int rootVal = preorder[pind++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = map[rootVal];
        root->left = build(preorder, s, mid-1);
        root->right = build( preorder, mid+1, e);
        return root;
    }
};