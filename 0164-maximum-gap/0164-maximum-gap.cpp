class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        int max=0;
        vector<int>vec;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            vec.push_back(nums[i+1]-nums[i]);
            max=std::max(max, vec[i]);
        }
        return max;
    }
};