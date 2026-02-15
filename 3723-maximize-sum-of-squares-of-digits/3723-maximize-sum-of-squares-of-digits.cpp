class Solution {
public:
        string maxSumOfSquares(int n, int s) {
        if (s > n * 9) return "";
        string res(s / 9, '9');
        if (s % 9)
            res += to_string(s % 9);
        return res + string(n - res.size(), '0');
    }
};