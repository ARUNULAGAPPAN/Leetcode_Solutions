class Solution {
public:
    string clearStars(string s) {
        int n = s.size();
        priority_queue<char, vector<char>, greater<char>> pq;
        unordered_map<char, vector<int>> m;
        vector<bool> keep(n, true);

        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                char minChar = pq.top();
                pq.pop();
                int idx = m[minChar].back();
                m[minChar].pop_back();
                keep[i] = false;
                keep[idx] = false;
            } else {
                pq.push(s[i]);
                m[s[i]].push_back(i);
            }
        }

        string result = "";
        for (int i = 0; i < n; i++) {
            if (keep[i]) result += s[i];
        }
        return result;
    }
};
