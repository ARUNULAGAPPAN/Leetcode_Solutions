class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || s.size()<=numRows)
          return s;
        vector<string>row(min(numRows,int(s.size())));
        int i=0;
        bool f = false;

        for(char c: s)
        {
            row[i] +=c;
            if(i==0 || i==numRows-1)
            {
                f = !f;
            }
            i += f ? 1 : -1;
        }

        string ans;
        for(string r : row)
        {
            ans +=r;
        }
        return ans;
    }
};