class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
     
        int n = nums.size();
        int ans = 0;
        int index;
        for (int i = 0; i < n; i++)
            if ((nums[i] & 1) == 0) {
                index = i;
                ans = nums[i];
                break;
            }
        int currEven;

        for (int i = index; i < n; i++) {
            if ((nums[i] & 1) == 0)
                ans = ans | nums[i];
        }
        return ans;
    }
};