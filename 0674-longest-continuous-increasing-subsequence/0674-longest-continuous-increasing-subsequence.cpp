class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
     int count =1;
     int m=1;

     for(int i=1;i<nums.size();i++)
     {
           if(nums[i]>nums[i-1])
           {
            count++;
           }
           else
           {
            count=1;
         
           }
          m = max(m, count);
     }   
     return m;
    }
};