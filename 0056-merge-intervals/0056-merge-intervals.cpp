class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        ranges::sort(intervals);
        int a = intervals[0][0];
        int b = intervals[0][1];

        for(int i=1;i<n;i++)
        {
            if(b>=intervals[i][1])
            {
                continue;
            }
            else if(b<intervals[i][0])
            {
                ans.push_back({a,b});
                a=intervals[i][0];
                b=intervals[i][1];
            }
            else
            {
                b=intervals[i][1];
            }
        }
        ans.push_back({a,b});
        return ans;
    }
};