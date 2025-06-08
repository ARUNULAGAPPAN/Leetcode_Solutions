class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double total =0.0;
    for(int i=0;i<k;i++)
    {
       total = total + nums[i];
    }       
     double m = total;
     for(int i=k;i<nums.size();i++)
     {
        total = total + nums[i] - nums[i-k];
        m =max ( m , total);
     }

     return (double)m/k;
    }
};