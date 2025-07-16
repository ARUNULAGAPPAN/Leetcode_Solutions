class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int e=0,o=0;
         for(int n:nums)
         {
            if(n %2 ==0)
               e++;
            else
             o++;
         }

         int edp =0,odp=0;

         for(int n:nums)
         {
            if(n % 2 ==0)
            {
                edp = max(edp, odp+1);
            }
            else
            {
                odp = max(odp, edp+1);
            }
         }
         return max({e,o,edp,odp});
    }
};