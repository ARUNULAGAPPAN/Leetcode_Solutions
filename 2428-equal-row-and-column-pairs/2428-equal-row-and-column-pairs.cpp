class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> rows = grid;             
        vector<vector<int>> cols(n, vector<int>(n)); 
      
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < n; ++i) {
                cols[j][i] = grid[i][j];
            }
        }

        int count = 0;
   
        for (auto& r : rows) {
            for (auto& c : cols) {
                if (r == c) {
                    count++;
                }
            }
        }

        return count;
    }
};
