class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        ranges::sort(candidates);
        int i=0;
        vector<vector<int>>ans;
        vector<int>op;
        
        solve(candidates, ans, target,op,i);

        return ans;
        }

        void solve(vector<int>&candidates, vector<vector<int>>&ans, int target, vector<int>&op, int k)
        {
            if(target == 0)
            {
                ans.push_back(op);
                return;
            }
            //recursion

            for(int i=k;i<candidates.size();i++)
            {
                if(i>k && candidates[i]==candidates[i-1])
                {
                    continue;
                }
                int remain = target;
                int candidate = candidates[i];
                if(candidate <= remain)
                {
                    op.push_back(candidate);
                    solve(candidates,ans,remain-candidate,op,i+1);
                    //backtrack
                    op.pop_back();
                }
            }
        }
};