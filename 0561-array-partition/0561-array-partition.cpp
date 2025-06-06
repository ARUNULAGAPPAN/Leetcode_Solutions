class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int n = nums.size();
        int sum =0;
        sort(v.begin(), v.begin()+n);

        for(int i=0;i<n;i=i+2)
        {
            sum = sum + v[i];
        }
        return sum;
    }
};