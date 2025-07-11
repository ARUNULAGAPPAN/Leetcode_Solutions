class Solution {
public:
 vector<vector<int>>ans;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         ranges::sort(nums);
         backtrack(nums,0);
        return ans;
    }

    void backtrack(vector<int>&nums, int start)
    {
        if(start == nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> set; 
        for(int i=start;i<nums.size();i++){
            if (set.count(nums[i])) 
              continue; 
            set.insert(nums[i]);

            swap(nums[start], nums[i]); //Pick
            backtrack(nums, start+1);
            swap(nums[start], nums[i]); //unpick
        }
    }
};