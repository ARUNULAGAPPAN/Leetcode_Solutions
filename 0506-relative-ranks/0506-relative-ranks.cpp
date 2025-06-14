class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int>sorted = score;
        vector<string>ans(n);

        sort(sorted.begin(), sorted.end(),greater<int>());
        unordered_map<int,int>rank;

        for(int i=0;i<n;i++)
        {
            rank[sorted[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int r = rank[score[i]];
            if(r==0) ans[i]="Gold Medal";
            else if(r==1) ans[i]="Silver Medal";
            else if(r==2) ans[i]="Bronze Medal";
            else ans[i]=to_string(r+1);
        }
        return ans;
    }
};