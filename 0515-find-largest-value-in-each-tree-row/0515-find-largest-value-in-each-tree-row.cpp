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
    vector<int> largestValues(TreeNode* root) {
          if (root == nullptr) return { };

    queue<TreeNode*> que;
    que.push(root);
    vector<int> ans; 

    while(!que.empty()){

        int int_max = INT_MIN;
        int size = que.size(); 

        for(int i = 0 ; i < size ; i++){

           TreeNode* temp = que.front();
           que.pop();
           int_max = max(temp->val, int_max);

           if(temp->left) que.push(temp->left);
           if(temp->right) que.push(temp->right);
        }
        ans.push_back(int_max);  
    }
    return ans; 
  
    }
};