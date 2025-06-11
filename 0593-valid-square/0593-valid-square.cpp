class Solution {
public:
    int dist(vector<int>& p1, vector<int>& p2) {
        return pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2);
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4}; // fixed

        unordered_map<int, int> dis;

        for (int i = 0; i < 4; ++i) {
            for (int j = i + 1; j < 4; ++j) {
                int d = dist(points[i], points[j]);
                if (d == 0) return false; // overlapping points
                dis[d]++;
            }
        }

        if (dis.size() != 2) return false; // square has only 2 unique distances

        for (auto& [distance, count] : dis) {
            if (count != 4 && count != 2) return false; // 4 sides and 2 diagonals
        }

        return true;
    }
};
