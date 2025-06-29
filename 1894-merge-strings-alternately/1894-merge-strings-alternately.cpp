class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int w1=word1.size();
        int w2=word2.size();
        int k=0,m=0;
        int n= word1.size()+word2.size();
        for(int i=0;i<n;i++)
        {
                if(i%2==0 || i==0)
                {
                    if(k<w1)
                    {
                    s=s+word1[k];
                    k++;
                    }      
                }
                else
                {    
                    if(m<w2)
                    {
                    s=s+word2[m];
                    m++;
                    }
                }
        }
          while (k < w1) 
            s += word1[k++];
        while (m < w2) 
           s += word2[m++];
        return s;
    }
};