class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
       int n = nums.size();
       vector<int>ans(n);
       int p=0,neg=1;
       for(int n : nums)
       {
        if(n>0)
        {
          ans[p] = n;
          p=p+2;
        }
        else
        {
            ans[neg] = n;
            neg = neg +2;
        }
       }
       return ans;
    }
};