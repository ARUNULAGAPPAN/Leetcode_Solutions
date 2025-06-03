class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = status.size();
        vector<bool> hasBox(n, false), hasKey(n, false), visited(n, false);
        queue<int> q;
        int totalCandies = 0;

        for (int box : initialBoxes) {
            hasBox[box] = true;
        }

        bool progress = true;
        while (progress) {
            progress = false;
            for (int i = 0; i < n; ++i) {
                if (hasBox[i] && (status[i] == 1 || hasKey[i]) && !visited[i]) {
                    // Visit this box
                    visited[i] = true;
                    totalCandies += candies[i];
                    progress = true;

                    // Collect keys
                    for (int key : keys[i]) {
                        hasKey[key] = true;
                    }

                    // Collect boxes
                    for (int newBox : containedBoxes[i]) {
                        hasBox[newBox] = true;
                    }
                }
            }
        }

        return totalCandies;
    }
};