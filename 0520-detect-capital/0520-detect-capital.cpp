class Solution {
public:
    bool detectCapitalUse(string word) {
     int up=0;
     for(char c : word)
     {
        if(isupper(c))
        {
            up ++;
        }
     }
     if(up==word.size())
     {
        return true;
     }
     if(up==0)
     {
        return true;
     }
     if(up ==1 && isupper(word[0]))
     {
        return true;
     }
     return false;
        
    }
};