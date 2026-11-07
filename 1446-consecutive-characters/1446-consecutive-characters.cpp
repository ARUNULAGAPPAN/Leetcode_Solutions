class Solution {
public:
    int maxPower(string s) {
        int count = 1, max = 1;
        for (int i = 1; s[i]; i++) {
            if (s[i] == s[i - 1])
                count++;
            else {
                max = (max < count) ? count : max;
                count = 1;
            }
        }
        max = (max < count) ? count : max;

        return max;
    }
};