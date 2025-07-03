class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string,int> m;
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        string s;
        for(int i=0;i<paragraph.size();i++)
        {
            
            if(isalpha(paragraph[i]))
            {
                s.push_back(paragraph[i]);
            }
            else{
                if(!s.empty())
                {
                    m[s]++;
                }
                s="";
            }
        }
        if(!s.empty()) m[s]++;
        int mx=0;
        string result;
        for(auto i:m)
        {
            if (i.second > mx && bannedSet.find(i.first) == bannedSet.end()) {
                mx = i.second;
                result = i.first;
            }
        }
        return result;
    }
};