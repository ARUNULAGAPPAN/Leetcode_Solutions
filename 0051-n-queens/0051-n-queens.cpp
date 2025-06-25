class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(0, ans, board, n);
        return ans;
    }

    void solve(int r, vector<vector<string>> &ans, vector<string> &board, int n) {
        if (r == n) {
            ans.push_back(board);
            return;
        }

        for (int c = 0; c < n; c++) {
            if (isSafe(c, r, board, n)) {
                board[r][c] = 'Q';
                solve(r + 1, ans, board, n);
                board[r][c] = '.';
            }
        }
    }

    bool isSafe(int c, int r, vector<string> &board, int n) {
        for (int i = 0; i < r; i++)
            if (board[i][c] == 'Q') return false;

        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;

        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
            if (board[i][j] == 'Q') return false;

        return true;
    }
};
