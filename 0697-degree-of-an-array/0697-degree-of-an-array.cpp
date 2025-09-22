class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<vector<int>> count(50000, vector<int> (3, -1));
        for (int i = 0; i < nums.size(); i++){
            if(count[nums[i]][0] == -1){
                count[nums[i]][0] = i;
                count[nums[i]][1] = 1;
                count[nums[i]][2] = 1;
            } else {
                count[nums[i]][1]++;
                count[nums[i]][2] = i - count[nums[i]][0] + 1;
            }
        }
        int max_fre = 0;
        int min_sub = INT_MAX;
        for (int i = 0; i < count.size(); i++){
            if(count[i][1] >= max_fre){
                if(count[i][1] == max_fre) min_sub = min({min_sub, count[i][2]});
                else min_sub = count[i][2];
                max_fre = count[i][1];
            }
        }
        
        return min_sub;
    }
};