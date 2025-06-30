class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size())
        {
            return false;
        }
        vector<int> f1(26,0),f2(26,0);
        vector<bool>e1(26,false),e2(26,false);

        for(char c: word1)
        {
            f1[c-'a']++;
            e1[c-'a']=true;
        }
          for(char c: word2)
        {
            f2[c-'a']++;
            e2[c-'a']=true;
        }
        if(e1 != e2) return false;
          ranges::sort(f1);
          ranges::sort(f2);
        return f1==f2;
    }
};