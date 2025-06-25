class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long ans = 0;

        // Skip leading spaces
        while (i < s.length() && s[i] == ' ')
            i++;

        // Handle optional sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert digits and handle overflow
        while (i < s.length() && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            if (ans * sign >= INT_MAX) return INT_MAX;
            if (ans * sign <= INT_MIN) return INT_MIN;

            i++;
        }

        return ans * sign;
    }
};
