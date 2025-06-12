class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word)
    {
        int count=0;
       for(string c:patterns)
       {
        int n=c.size();
        for(int i=0;i<word.size();i++)
        {
            string k=word.substr(i,n);
            if(k==c) {count++; break;}
        }
       }  return count;
    }
};