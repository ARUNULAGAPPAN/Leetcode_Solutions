class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> map;
        int duplicate = -1, missing = -1;
        int n = nums.size();

        for (int num : nums) {
            map[num]++;
        }

        for (int i = 1; i <= n; i++)
         {
            if (map[i] == 2)
             {
                duplicate = i;
            } else if (map[i] == 0) {
                missing = i;
            }
        }

        return {duplicate, missing};
    }
};
