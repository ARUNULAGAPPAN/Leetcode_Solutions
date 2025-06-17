class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        unordered_map<int, int>map;
        for(int i=0;i<numbers.size();i++)
        {
            int c = target - numbers[i];
            if(map.count(c))
            {
                return {map[c]+1,i+1};
            }
            else
            {
                map[numbers[i]]=i;
            }
        }
        return {};
    }
};