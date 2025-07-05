class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return n;
        unordered_set<int>set{nums.begin(), nums.end()};
        int m =0;
        for(int n:set)
        {
            if(!set.count(n-1))
            {
                int a = n;
                int c = 1;

                while(set.count(a+1))
                {
                    a++;
                    c++;
                }
                 m = max (m, c);
            }
           
        }
        return m;
    }
};