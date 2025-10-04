class Solution {
public:
    // Recursion + Memoization (Top Down)
    int solve(int n, vector<int> &dp) {
        if (n <= 1) return 1;
        if (dp[n] != -1) return dp[n];
        int ans = 0;
        for (int i = 1;i <= n; i++) {
            ans += solve(i -1, dp) * solve(n - i, dp);
        }
        return dp[n] = ans;
    }

    // Tabulation (Bottom Up DP)
    int solveUsingTab(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = dp[1] = 1;
        for (int i = 2; i <=n; i++) {
            for (int j = 1;j <= i; j++) {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }
        return dp[n];
    }

    // Catalan Number Formula
    int Catalan_Number(int n) {
        long long catalan = 1;
        for (int i = 0; i < n; i++) {
            catalan = catalan * 2* (2 * i + 1) / (i + 2);
        }
        return (int)catalan;
    }

    int numTrees(int n) {
        // Option 1: Top Down DP
        // vector<int> dp(n+1, -1);
        // return solve(n, dp);

        // Option 2: Bottom Up DP
        // return solveUsingTab(n);

        // Option 3: Catalan Formula
        return Catalan_Number(n);
    }
};