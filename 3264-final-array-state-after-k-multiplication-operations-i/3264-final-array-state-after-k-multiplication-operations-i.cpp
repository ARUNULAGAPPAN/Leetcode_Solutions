class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        for(int i=0;i<k;i++)
        {
            int mini=nums[0];
            int mini_ind=0;
            for(int j=1;j<nums.size();j++)
            {
                if(nums[j]<mini)
                {
                    mini=nums[j];
                    mini_ind=j;
                }
            }
            nums[mini_ind]=nums[mini_ind]*multiplier;
        }
        return nums;
    }

};