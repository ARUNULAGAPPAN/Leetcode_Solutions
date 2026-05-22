class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int, int>mp;
       for(auto x : nums)
       {
        mp[x]++;
       }
       vector<pair<int, int>> v;
       for(auto&[e,f] : mp)
       {
        v.push_back({f,e});
       } 

       sort(v.begin(),v.end(),[](auto &a, auto &b){
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
       });

       vector<int>out;
       for(auto [f,e] : v)
       {
         out.insert(out.end(), f,e);
       }
       return out;
    }
};