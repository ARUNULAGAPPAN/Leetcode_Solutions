class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, count = 0;
        unordered_map<int, int> map;
        map[0] = 1;  // To handle cases where subarray starts from index 0

        for (int n : nums) {
            sum += n;

            // Check if (sum - k) has occurred before
            if (map.count(sum - k)) {
                count += map[sum - k];
            }

            // Store/update current prefix sum
            map[sum]++;
        }
        return count;
    }
};
