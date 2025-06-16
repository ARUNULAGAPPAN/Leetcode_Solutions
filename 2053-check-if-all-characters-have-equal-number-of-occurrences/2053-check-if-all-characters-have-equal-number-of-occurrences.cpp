class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>map;
        for(char c: s)
        {
            map[c]++;
        }
        int n = map[s[0]];
        for(int i =1;i<s.size();i++)
        {
            if(n!=map[s[i]]) return false;
        }
        return true;
    }
};