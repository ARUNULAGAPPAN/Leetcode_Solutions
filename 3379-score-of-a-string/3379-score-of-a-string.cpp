class Solution {
public:
    int scoreOfString(string s) {
        int d=0;
        for(int i=1;i<s.size();i++)
        {
            d= d+ (abs((int)s[i]-(int)s[i-1]));
        }
        return d;
    }
};