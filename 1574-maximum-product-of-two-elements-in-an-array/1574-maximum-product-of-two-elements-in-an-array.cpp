class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size()-1;
        return max( (nums[n]-1) *(nums[n-1]-1), (nums[0]-1) * (nums[n]-1));
    }
};