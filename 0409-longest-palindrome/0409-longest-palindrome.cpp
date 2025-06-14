class Solution {
public:
    int longestPalindrome(string& s) 
    {
        unordered_set<int>set;
        int ans =0;
        for(char c : s)
        {
            if(set.count(c))
            {
                set.erase(c);
                ans +=2;
            }
            else
            {
                set.insert(c);
            }
        }
        if(!set.empty())
        {
            ans = ans +1;
        }
        return ans;
    }
};
