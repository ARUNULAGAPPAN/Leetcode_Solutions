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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        pind = postorder.size()-1;

        for(int i=0;i<inorder.size();i++)
        {
            map[inorder[i]] = i;
        }
        return build(postorder, 0 , inorder.size()-1);
    }
    TreeNode* build(vector<int>&postorder , int s, int e)
    {
        if(s>e) return nullptr;
         
         int rootVal = postorder[pind--];
         TreeNode* root = new TreeNode(rootVal);
         int mid = map[rootVal];
           root->right = build(postorder, mid+1 , e);
           
         root->left = build(postorder, s, mid-1);
       
         return root;
    }
};