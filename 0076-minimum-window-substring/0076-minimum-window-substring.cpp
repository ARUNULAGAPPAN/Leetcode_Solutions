class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        int st = 0;                   // Start index of result
        int en = INT_MAX;             // Length of smallest window
        int count = t.size();         // Characters to match
        int i = 0;                    // Left pointer
        vector<int> map(128, 0);      // ASCII map

        for (char c : t) map[c]++;    // Fill map with frequency of t

        for (int j = 0; j < s.size(); j++) {
            if (map[s[j]]-- > 0) count--;  // Decrease count if needed char is found

            while (count == 0) {  // Valid window
                if (j - i + 1 < en) {
                    st = i;
                    en = j - i + 1;  // Update result window
                }

                if (map[s[i++]]++ == 0) {
                    count++;  // If char at i was part of t, we lose it
                }
            }
        }

        return en == INT_MAX ? "" : s.substr(st, en);
    }
};
