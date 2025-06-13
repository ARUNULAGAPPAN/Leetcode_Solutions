class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       
       vector<int>ans;
     
        for(int n : nums)
        {  int c=0;
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