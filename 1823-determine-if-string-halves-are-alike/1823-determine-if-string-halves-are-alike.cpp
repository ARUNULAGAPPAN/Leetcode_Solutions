class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size()/2;
        int c1=0,c2=0;
        for(char &c:s)
        {
            c=tolower(c);
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c1++;
            }
        }
         for(int i=n;i<n*2;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c2++;
            }
        }
        return c1==c2;
    }
};