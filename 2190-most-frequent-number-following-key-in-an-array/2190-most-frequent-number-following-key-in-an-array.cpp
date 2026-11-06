class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int count = INT_MIN;
        map<int, int> mp;
        int element;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key)
                mp[nums[i + 1]]++;
        }
        int ele, maxFreq = INT_MIN;
        for (auto& it : mp) {
            if (maxFreq < it.second) {
                maxFreq = it.second;
                ele = it.first;
            }
        }
        return ele;
    }
};