class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX,i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[i]<min) min=nums[i];
            if(nums[j]<min) min=nums[j];
            i++;j--;
        }
        return min;
    }
};