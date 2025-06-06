class Solution {
public:
    string reverseWords(string s) 
    {int a=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                 reverse(s.begin()+a, s.begin()+i);
                 a=i+1;
            }
        }
        reverse(s.begin()+a, s.end()); //reverse last word
        return s;
        
    }
};