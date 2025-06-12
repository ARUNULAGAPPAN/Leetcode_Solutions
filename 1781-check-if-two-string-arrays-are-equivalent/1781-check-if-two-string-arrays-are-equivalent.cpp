class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
     string k,l;
     for(int i=0;i<word1.size();i++) k+=word1[i];
     for(int i=0;i<word2.size();i++) l+=word2[i];
     return(k==l);   
    }
};