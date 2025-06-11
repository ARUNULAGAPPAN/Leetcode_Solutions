class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>ans;
        for(int n : nums)
        {
            map[n]++;
        }
        for(auto&[a,c] : map)
        {
            if(c>1)
            {
                ans.push_back(a);
            }
        }
        return ans;
            }
};