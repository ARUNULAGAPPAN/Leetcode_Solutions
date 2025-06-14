class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string goods = "";
        for (char c : s) {
            if (c != '-') {
                goods += toupper(c); // Correct and safe for all characters
            }
        }

        string ans = "";
        int first = goods.size() % k;

        if (first > 0) {
            ans += goods.substr(0, first) + "-";
        }

        for (int i = first; i < goods.size(); i += k) {
            ans += goods.substr(i, k) + "-";
        }

        // Remove the last dash if it exists
        if (!ans.empty() && ans.back() == '-') {
            ans.pop_back();
        }

        return ans;
    }
};
