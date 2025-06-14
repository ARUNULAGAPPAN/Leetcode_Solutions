class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      int n = g.size();
      int j = s.size()-1;
      int ans =0;
      if(g.size()==0 || s.size() == 0)return 0;
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());

       for(int i=n-1;i>=0;i--)
       {
         if(g[i]>s[j])
         {
            continue;
         }
         else
         {
            ans++;
            if(j==0)break;
            j--;
         }
       }
       return ans;  
    }
};