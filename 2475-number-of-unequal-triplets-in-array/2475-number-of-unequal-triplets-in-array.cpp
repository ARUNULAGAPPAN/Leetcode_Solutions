class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int totalCountValidTriplets = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        int n = nums.size();
        int leftTotal = 0, currentFreq, rightTotal;
        for (auto& it : mp) {
            currentFreq = it.second;
            rightTotal = n - currentFreq - leftTotal;
            totalCountValidTriplets += (leftTotal * currentFreq * rightTotal);
            leftTotal += it.second;
        }
        return totalCountValidTriplets;
    }
};