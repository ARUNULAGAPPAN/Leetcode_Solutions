class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int>map;
        for(char c : word)
        {
            map[c]++;
        }
        int ans= INT_MAX;
        
        for(auto&[ci,fi] : map )
        {
            int deletions =0;
            for(auto&[cj,fj]: map)
            {
                int diff = fj - fi;
                if(fj < fi)
                {
                    deletions = deletions + fj;
                }
                else if(diff >k)
                {
                    deletions = deletions + (diff - k);
                }
            }
            ans = min( ans, deletions);
        }
        return ans;
    }
};