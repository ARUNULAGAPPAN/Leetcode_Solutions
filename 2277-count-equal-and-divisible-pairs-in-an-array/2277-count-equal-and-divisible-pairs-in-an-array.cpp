class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        int n= nums.size();
        int i=0,j=0;
        for( i=0;i<n;i++)
        {
            for( j=i+1;j<n;j++)
            {
                if(nums[i]== nums[j] && (i*j)%k==0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};