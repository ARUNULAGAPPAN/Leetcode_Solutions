class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       unordered_map<char,int>map;
       int c=0;
       for(char c: jewels)
       {
        map[c]++;
       } 
       for(int i=0;i<stones.size();i++)
       {
        if(map.count(stones[i]))
        {
            c++;
        }
       }
       return c;
    }
};