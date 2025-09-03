class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;
        int wl = words[0].size(), wc = words.size(), concat = wl * wc, n = s.size();
        if (n < concat) return result;
        unordered_map<string, int> wordMap;
        for (auto& word : words) wordMap[word]++;
        
        for (int i = 0; i < wl; ++i) {
            int left = i, count = 0;
            unordered_map<string, int> seen;
            for (int right = i; right + wl <= n; right += wl) {
                string word = s.substr(right, wl);
                if (wordMap.count(word)) {
                    seen[word]++;
                    count++;
                    while (seen[word] > wordMap[word]) {
                        string leftWord = s.substr(left, wl);
                        seen[leftWord]--;
                        count--;
                        left += wl;
                    }
                    if (count == wc) {
                        result.push_back(left);
                        string leftWord = s.substr(left, wl);
                        seen[leftWord]--;
                        count--;
                        left += wl;
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = right + wl;
                }
            }
        }
        return result;
    }
};