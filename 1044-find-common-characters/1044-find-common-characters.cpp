class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        if (words.empty()) {
            return {};
        }

        map<char, int> min_freq;
        for (char c : words[0]) {
            min_freq[c]++;
        }

        for (int i = 1; i < words.size(); ++i) {
            map<char, int> current_freq;
            for (char c : words[i]) {
                current_freq[c]++;
            }

            for (auto const& [key, val] : min_freq) {
                if (current_freq.count(key)) {
                    min_freq[key] = min(val, current_freq[key]);
                } else {
                    min_freq[key] = 0;
                }
            }
        }

        vector<string> result;
        for (auto const& [key, val] : min_freq) {
            for (int i = 0; i < val; ++i) {
                result.push_back(string(1, key));
            }
        }

        return result;
    }
};