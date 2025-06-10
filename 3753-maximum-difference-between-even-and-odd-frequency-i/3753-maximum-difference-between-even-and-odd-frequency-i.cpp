class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int>map;
        for(char c : s)
       {
        map[c]++;
       }
       int e=INT_MAX; int o = INT_MIN;
       for(auto&[a,c]:map)
       { 
          if(c%2==0)
          {
            e = min(e,c);
          }
          else
          {
            o = max(o,c);
          }
       }
       if (e == INT_MAX || o == INT_MIN)
            return 0; 
       return o-e;
    }
};