class Solution {
    vector<int> buildLPSLength(string &s) {
        vector<int> lpsLength(s.size());
        int len = 0;
        int j = 1;
        while (j < s.size()) {
            if (s[j] == s[len]) {
                len++;
                lpsLength[j] = len;
                j++;
            } else {
                if (len == 0) {
                    lpsLength[j] = 0;
                    j++;
                } else {
                    len = lpsLength[len - 1];
                }
            }
        }
        return lpsLength;
    }

public:
    string shortestPalindrome(string s) {
        string sReverse = s;
        reverse(sReverse.begin(), sReverse.end());

        string concat = s + "@" + sReverse;
        vector<int> lpsLength = buildLPSLength(concat);
        int palindromeLengthAtStart = lpsLength[concat.size() - 1];
        
        string toAdd = sReverse.substr(0, s.size() - palindromeLengthAtStart);

        return toAdd + s;
    }
};