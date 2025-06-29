class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int c=0;
        ranges::sort(nums);
        int mod = 1e9+7;
        int n= nums.size();
        //find pow2 array
        vector<int>pow(n,1);
        for(int i=1;i<n;i++)
        {
            pow[i]=(pow[i-1]*2)%mod;//1,2,4,8,16,...
        }
        int left=0,right=n-1;
        while(left<=right) // <=
        {
            if(nums[left]+nums[right]<=target)
            {
                 c = (c+pow[right- left])%mod;
                 left++;
            }
            else
            {
                right--;
            }

        }
        return c;
    }
};