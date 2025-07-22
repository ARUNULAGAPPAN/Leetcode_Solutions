class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int left = 0, right = 0;
        int maxSum = 0, currSum = 0;

        while (right < nums.size()) {
            // If nums[right] is not in the set, add it
            if (seen.find(nums[right]) == seen.end()) {
                currSum += nums[right];
                seen.insert(nums[right]);
                maxSum = max(maxSum, currSum);
                right++;
            } else {
                // If duplicate found, move left pointer and remove from set
                currSum -= nums[left];
                seen.erase(nums[left]);
                left++;
            }
        }

        return maxSum;
    }
};