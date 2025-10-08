class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0, minAbs = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0 && k > 0) {
                nums[i] = -nums[i];
                k--;
            }
            minAbs = min(minAbs, abs(nums[i]));
            sum += nums[i];
        }

        if (k % 2 == 1) sum -= 2 * minAbs;
        return sum;
    }
};