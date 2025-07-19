class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        ranges::sort(nums);
        backtrack(0, nums, subset, ans);
        return ans;
    }

    void backtrack( int i , vector<int>&nums, vector<int>&subset, vector<vector<int>>&ans)
    {
        if(i  == nums.size())
        {
            ans.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        backtrack(i+1 , nums, subset, ans);
        subset.pop_back();


        while(i+1 < nums.size() && nums[i] == nums[i+1])
        {
            i++;
        }
        backtrack(i+1 , nums, subset, ans);
    }
    

    
};