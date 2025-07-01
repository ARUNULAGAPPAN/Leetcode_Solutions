class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ranges::sort(points);
        int lastpoint = points[0][1];
        int ans = 1;
        for(auto p : points)
        {
            if(p[0] > lastpoint)
            {
                ans++;
                lastpoint = p[1];
            }
            lastpoint = min( p[1], lastpoint);
        }
        return ans;
    }
};