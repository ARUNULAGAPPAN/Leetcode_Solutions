class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        while(ans.size() < k)
        {
            int n = ans.size();
            for(int i=0;i<n;i++)
            {
                char c = 'a'+((ans.at(i)-'a'+1)%26);
                ans +=c;
            }
        }
        return ans[k-1];
    }
};