class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int o =0;
        int z=0;
        for(char c : s)
        {
            if(c=='1') o++;
            else if(c=='0') z++;
        }
        string ans="";
        for(int i=0;i<o-1;i++)
        {
            ans = ans + '1';
        }
        for(int i=0;i<z;i++)
        {
            ans = ans +'0';
        }
        return ans+'1';
    }
};