class Solution {
public:
    int minElement(vector<int>& nums) {
        int smaller=nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            int value = nums[i];
            int sum=0;
            while(value)
            {
                int rem = value % 10;
                sum = rem + sum;
                value = value / 10;
            }
            if(smaller > sum)
                smaller = sum;
        }
        return smaller;
    }
};