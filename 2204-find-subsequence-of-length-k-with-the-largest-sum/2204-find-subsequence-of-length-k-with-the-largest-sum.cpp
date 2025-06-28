class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
    vector<pair<int,int>>sums;
    for(int i=0;i<nums.size();i++)
    {
        sums.push_back({nums[i],i});
    }
    sort(sums.begin(),sums.end(),[](auto &a,auto&b){return(a.first>b.first);});
    vector<pair<int,int>>ans;
    for(int i=0;i<k;i++)
    {
        ans.push_back(sums[i]);
    }    
    sort(ans.begin(),ans.end(),[](auto &a,auto &b){return (a.second<b.second);});
    vector<int>ans1;
    for(int i=0;i<k;i++)
    {
        ans1.push_back(ans[i].first);
    }
    return ans1;
    }
};