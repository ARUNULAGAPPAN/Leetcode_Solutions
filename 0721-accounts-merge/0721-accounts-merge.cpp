class Solution {
public:
    class DisJointSets{
        public:
        vector<int> parent;
        vector<int> rank;
        DisJointSets(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);
            for(int i=0;i<=n;i++){
                parent[i]=i;
            }
        }
        int findparent(int node){
            if(node==parent[node]){
                return node;
            }
            return parent[node]=findparent(parent[node]);
        }
        void union_by_rank(int u, int v){
            int parentu=findparent(u);
            int parentv=findparent(v);
            if(parentu==parentv){
                return;
            }
            if(rank[parentu]<rank[parentv]){
                parent[parentu]=parentv;
            }
            else if(rank[parentv]<rank[parentu]){
                parent[parentv]=parentu;
            }
            else{
                parent[parentv]=parentu;
                rank[parentu]++;
            }
        }
    };
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,int> mp;
        DisJointSets ds(accounts.size());
        for(int i=0;i<accounts.size();i++){
            for(int j=1;j<accounts[i].size();j++){
                if(mp.find(accounts[i][j])==mp.end()){
                    mp[accounts[i][j]]=i;
                }
                else{
                    ds.union_by_rank(mp[accounts[i][j]],i);
                }
            }
        }
        vector<string> merged[accounts.size()];
        for(auto it:mp){
            int parent=ds.findparent(it.second);
            merged[parent].push_back(it.first);
        }
        for(auto &it:merged){
            sort(it.begin(),it.end());
        }
        vector<vector<string>> ans;
        for(int i=0;i<accounts.size();i++){
            if(merged[i].empty()){
                continue;
            }
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(string mail:merged[i]){
                temp.push_back(mail);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};