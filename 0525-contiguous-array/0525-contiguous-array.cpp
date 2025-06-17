class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0, m = 0;
        unordered_map<int, int> map;
        map[0] = -1; // Handle case when subarray starts from index 0

        for (int i = 0; i < nums.size(); ++i) {
            // Convert 0 to -1 to use sum trick
            sum += (nums[i] == 1) ? 1 : -1;

            if (map.count(sum)) {
                // If the same sum was seen before, subarray from seen[sum]+1 to i has equal 0s and 1s
                m = max(m, i - map[sum]);
            } else {
                // First time this sum appears, store the index
                map[sum] = i;
            }
        }
        return m;
    }
};
