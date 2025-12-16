class Solution {
public:
    //1. level order 
    //2. rows(M)=height+1 and col(N)=2P(height+1)-1.
    //3. root node row[0] col[n-1/2]
    //4. left child row[r+1] col[c-2p(height-r-1)] 3-
    //5. right row[r+1] col[c+2p(height-r-1)] 3+

    int  height(TreeNode * root){
        if(!root) return 0 ;
        
        return 1+max(height(root->left),height(root->right));
    }

    vector<vector<string>> printTree(TreeNode* root) {
        int size=height(root)-1;
        int m=size+1;
        int k=pow(2,size+1)-1;
      vector<vector<string>>ans(size+1,vector<string>(pow(2,size+1) - 1 , ""));
        queue<TreeNode *>q;
        q.push(root);
         unordered_map<TreeNode*,pair<int,int>>mp;
         string rs =to_string(root->val);
        ans[0][(k-1)/2] = rs;
        mp[root] = {0,(k-1)/2};//root condition
        while(!q.empty()){
             int n = q.size();
            for(int i=0 ;i<n;i++){
                TreeNode* curr=q.front();
                int row= mp[curr].first;
                int col =mp[curr].second;
                q.pop();
            if(curr->left){
                q.push(curr->left);
                string rl = to_string(curr->left->val);
                 // checking the left rows and coloumn which is not exceeding 
                    // if(row+1 >= 0 && row+1 < size+1 && col - pow(2,size-row-1)>=0 && col - pow(2,size-row-1)<pow(2,size+1) - 1){
                        ans[row+1][col - pow(2,size-row-1)]= rl;
                    mp[curr->left] = {row+1 , col - pow(2,size-row-1)};
                    }
            // }
            if(curr->right){
                q.push(curr->right);
                 string rr = to_string(curr->right->val);
 // checking the right rows and coloumn which is not exceeding 
                    // if(row+1 >= 0 && row+1 < size+1 && col + pow(2,size-row-1)>=0 && col + pow(2,size-row-1)<pow(2,size+1) - 1){
                        ans[row+1][col + pow(2,size-row-1)]= rr;
                    mp[curr->right] = {row+1 , col + pow(2,size-row-1)};
                    // }
            }
            }
        }
    return ans;
    }
};