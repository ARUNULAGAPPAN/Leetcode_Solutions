class Solution {
public:
    string greatestLetter(string s) {
        int ar[26]={0};
        int br[26]={0};
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                ar[s[i]-65]++;
            }
            else{
                br[s[i]-97]++;
            }
        }
        string t="";
        for(int i=0;i<26;i++){
           if(ar[i]!=0 && br[i]!=0){
               t=char(i+65);
           }  
        }
        return t;
    }
};