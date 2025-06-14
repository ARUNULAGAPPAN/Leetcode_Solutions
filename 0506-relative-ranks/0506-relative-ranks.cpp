class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> sorted = score;

        sort(sorted.begin(), sorted.end(), greater<int>());
        unordered_map<int, int> rank;

        // Map each score to its rank
        for (int i = 0; i < n; i++) {
            rank[sorted[i]] = i;
        }

        vector<string> ans; // No pre-size, we use push_back
        for (int i = 0; i < n; i++) {
            int r = rank[score[i]];
            if (r == 0)
                ans.push_back("Gold Medal");
            else if (r == 1)
                ans.push_back("Silver Medal");
            else if (r == 2)
                ans.push_back("Bronze Medal");
            else
                ans.push_back(to_string(r + 1));
        }

        return ans;
    }
};
