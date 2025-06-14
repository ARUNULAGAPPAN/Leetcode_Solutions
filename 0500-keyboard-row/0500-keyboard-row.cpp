class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 = {'z','x','c','v','b','n','m'};
        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            string lower = "";

            // Convert word to lowercase
            for (char ch : word) {
                lower += tolower(ch);
            }

            // Flags to track which rows the letters are from
            bool A = true, B = true, C = true;

            for (char ch : lower) {
                if (!row1.count(ch)) A = false;
                if (!row2.count(ch)) B = false;
                if (!row3.count(ch)) C = false;
            }

            // If all letters came from the same row, add to answer
            if (A || B || C) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};
