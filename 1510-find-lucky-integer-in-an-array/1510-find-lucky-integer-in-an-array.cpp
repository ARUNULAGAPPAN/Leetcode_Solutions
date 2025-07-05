class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>map;
        for(int a: arr)
        {
            map[a]++;
        }
        int m =-1;
        for(auto&[a,c]:map)
        {
            if(a==c)
            {
                m = max(m,a);
            }
        }
        return m;
    }
};