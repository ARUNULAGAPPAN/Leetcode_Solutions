class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (__builtin_popcount(i) == k)
                sum += nums[i];
        }
        return sum;
    }
    /* Function __builtin_popcount(i)
    {
        int c=0,copy=i;
        while(copy)
        {
            c = c + (copy&1);
            copy = copy >> 1;
        }
        return c;
    }*/
};