class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind ;
        int f=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                ind = i;
                f =1;
                break;
            }
            
        }
        if(f==0) return word;
        reverse(word.begin(),word.begin()+ind+1);
        return word;        
    }
};