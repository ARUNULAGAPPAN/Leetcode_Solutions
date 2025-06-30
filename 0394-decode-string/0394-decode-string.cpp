class Solution {
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>str;
        string ans="";
        int n=0;
        for(char c: s)
        {
            if(isdigit(c))
            {
                n=(n*10) + (c-'0');                
            }
            else if(c=='[')
            {
              num.push(n);
              str.push(ans);
              n=0;
              ans="";
            }
            else if(c==']')
            {
                string t = ans;
                int r = num.top();
                num.pop();
                ans = str.top();
                str.pop();
                while(r--)
                {
                    ans = ans +t;
                }
            }
                else
                {
                    ans = ans+c;

                }
            
        }
        return ans;
    }
};