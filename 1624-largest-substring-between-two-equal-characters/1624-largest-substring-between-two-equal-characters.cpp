class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> start(26, 0);
        vector<int> end(26, 0);
        for (int i = 0; i < s.length(); i++) {
            if (!start[s[i] - 'a']) {
                start[s[i] - 'a'] = i + 1;
            } else {
                end[s[i] - 'a'] = i + 1;
            }
        }
        int ans = -1;
        for (int i = 0; i < 26; i++) {
            ans = max(ans, end[i] - start[i] - 1);
        }
        return ans;
    }
};