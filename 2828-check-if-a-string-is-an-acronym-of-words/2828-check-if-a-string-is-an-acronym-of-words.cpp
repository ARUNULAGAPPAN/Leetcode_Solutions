class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        
        // Build acronym from first characters
        for(string word : words){
            ans += word[0];
        }
        
        // Compare with given string
        return ans == s;
    }
};