class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int n : nums)
        {
            map[n]++;
        }
        for(auto&[a,c]:map)
        {
            if(c%2!=0)
            {
                return false;
            }
        }
        return true;
    }
};