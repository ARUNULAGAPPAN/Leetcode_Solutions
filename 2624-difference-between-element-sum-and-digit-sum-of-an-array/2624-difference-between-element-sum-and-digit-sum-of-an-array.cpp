class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,s=0;
        for(int n:nums)
        {
            sum = sum + n;
        }
        for(int i=0;i<nums.size();i++)
        {int k=0;
            while(nums[i]>0)
            {
                 k =  nums[i]%10;
                nums[i] /= 10;
                s=s+k;
            }
          
        }
        return abs(s-sum);
    }
};