class Solution {
public:
    long long help(int i, int j, vector<int>& nums1, vector<int>& nums2, int k,
                   vector<vector<vector<long long>>>& dp) {
        int n = nums1.size();
        int m = nums2.size();
        if (k == 0)
            return 0;
        else if (i >= n || j >= m)
            return LLONG_MIN;
        if(n-i<k||m-j<k)return LLONG_MIN;
        if (dp[i][j][k] != LLONG_MIN)
            return dp[i][j][k];
        long long take1 = LLONG_MIN;
        long long take2 = LLONG_MIN;
        long long take3 = LLONG_MIN;

        take1 =help(i + 1, j + 1, nums1, nums2, k - 1, dp);
        if(take1!=LLONG_MIN) take1+= nums1[i] * 1LL * nums2[j];
        take2 = help(i, j + 1, nums1, nums2, k, dp);
        take3 = help(i + 1, j, nums1, nums2, k, dp);

        return dp[i][j][k] = max({take1, take2, take3});
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<vector<long long>>> dp(
            n,
            vector<vector<long long>>(m, vector<long long>(k + 1, LLONG_MIN)));
        // long long ans=help(0, 0, nums1, nums2, k,dp);
        return help(0, 0, nums1, nums2, k, dp);
    }
};