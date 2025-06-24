bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
	int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
	int ans=-1;
    sort(intervals.begin(),intervals.end(),comp);
    vector<int>p=intervals[0];
     for(vector<int> v: intervals)
     {
        if(p[1]>v[0])
        {
            ans++;
        }
        else
        {
            p=v;
        }
     }
     return ans;
     }
};