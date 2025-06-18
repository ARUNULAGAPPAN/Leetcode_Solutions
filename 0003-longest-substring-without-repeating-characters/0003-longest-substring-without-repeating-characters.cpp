class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int m =0;
        unordered_set<char>set;
        int i=0;

        for(int j=0;j<n;j++)
        {
            if(set.count(s[j])==0)
            {
              set.insert(s[j]);
              m = max(m,j-i+1);
            }
            else
            {
                while(set.count(s[j]))
                {
                    set.erase(s[i]);
                    i++;
                }
             set.insert(s[j]);
            }
        }
        return m;
    }
};