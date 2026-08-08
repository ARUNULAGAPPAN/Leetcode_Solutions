class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            reverse(s.begin(), s.end());
            st.insert(stoi(s));
        }

        return st.size();
    }
};