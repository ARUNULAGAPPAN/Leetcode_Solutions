class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        intervals.push_back(newInterval);
        ranges::sort(intervals);
        int n= intervals.size();
        int a=intervals[0][0];
        int b=intervals[0][1];
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