class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int left = 0;
        for (int right = 0; right < nums.size(); right++) 
        {
            if (nums[right] == 0) k--;  // Flip a zero

            // If flips exceeded, move the left pointer
            if (k < 0) 
            {
                if (nums[left] == 0) k++;  // Revert a flipped zero
                left++;
            }
        }
        return nums.size() - left;
    }
};
