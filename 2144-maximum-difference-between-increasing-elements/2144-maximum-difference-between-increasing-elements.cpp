class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int m = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]-nums[i]>m)
                {
                    m= nums[j]-nums[i];
                }
            }
        }
        return m > 0 ? m : -1;

    }
};