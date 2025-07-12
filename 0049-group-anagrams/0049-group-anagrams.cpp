class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
      vector<vector<string>>ans;
      unordered_map<string, vector<string>>map;

      int n = s.size();
       //Group in sorted manner
      for(int i=0;i<n;i++){
        string temp  = s[i];
        ranges::sort(temp);
        map[temp].push_back(s[i]);
      }
      //Exract the Group
      for(auto &[a,c] : map){
        ans.push_back(c);
      }
      return ans;
    }
};