class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int m=1,m1=1,c=0;
       for(int n: nums)
       {
        if(n==0) c++;

        m=m*n;
       } 
       for(int n:nums)
       {
        if(n!=0)
        {
            m1 = m1*n;
        }
       }
       for(int i=0;i<nums.size();i++)
       {
         int n = nums[i];
         if(c>1)
         {
         nums[i] = 0;
         } 
         else if(n!=0)
         {
            nums[i]=m/n;
         }
         else
         {
            nums[i]=m1;
         }
       }
       return nums;

    }
};