class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int n= nums.size();
       vector<int>ans;
       int c=0;
        for(int n : nums)
        {
            for(int m : nums)
            {
                if(n>m)
                {
                    c++;
                }
            }
            ans.push_back(c);
            c=0;
        }
        return ans;
    }

};