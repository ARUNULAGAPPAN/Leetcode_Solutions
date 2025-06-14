class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>o = nums;
        sort(nums.begin(),nums.end(),greater<int>());
        int flarg = nums[0];
        int slarg = nums[1];
        if(flarg >= 2*slarg)
        {
            for(int i=0;i<n;i++)
            {
                if(o[i]==flarg)
                {
                  return i;
                }
            }
        }
       return -1;
    }
};