class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size(), c;
        vector<int> b(k);
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++) {
            c = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) 
                    c++;
            }
            a[i] = { c, i };
        }   

        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++) {
            b[i] = a[i].second;
        }

        return b;
    }
};