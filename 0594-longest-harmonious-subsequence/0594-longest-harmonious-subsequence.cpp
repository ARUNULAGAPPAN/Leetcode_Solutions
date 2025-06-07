class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>map;
        for(int n:nums)
        {
            map[n]++;
        }
        int l =0;
        for(auto&[a,c] : map)
        {
            if(map.count(a+1))
            {
                int next = map[a+1];
                l = max(l, c+next);
            }
        }
        return l;

    }
};