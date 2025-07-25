class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>set;
      int m =INT_MIN;
      int sum =0;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i] > 0)
          {
            set.insert(nums[i]);
          }
          else
          {
            m = max(m,nums[i]);
          }
      }
      for(auto n : set)
      {
        sum += n;
      }
      if(set.size())
      {
        return sum;
      }
      return m;
    }
};