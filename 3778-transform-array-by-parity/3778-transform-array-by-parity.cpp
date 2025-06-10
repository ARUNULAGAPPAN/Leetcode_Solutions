class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int e=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                e++;
            }
        }
        for(int i=0;i<e;i++)
        {
            nums[i]=0;
        }
        for(int i=e;i<nums.size();i++)
        {
            nums[i]=1;
        }
        return nums;
            }
};