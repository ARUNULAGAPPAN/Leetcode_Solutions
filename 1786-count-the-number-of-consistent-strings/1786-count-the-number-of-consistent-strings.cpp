class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       int count=0;
      
       for(int i=0;i<words.size();i++)
       { int f=1;
         for(char c: words[i])
         {
           if(allowed.find(c) == string::npos)
           {
              f=0;
              break;
           }
         }
         if(f==1) count++;
       }
       return count;
            
         
           
    }
};