class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        //mid
        //totaltime
   
        int l=1;
        int r= *max_element(piles.begin(), piles.end());
        int ans=r;
        while(l<=r)
        {
            int mid = (l+r)/2;
            long total =0;
            for(int p : piles)
            {
                total += ceil(p/(double)mid);
            }
            if(total<=h)
            {
                ans = mid;
                r = mid-1;
            }
            else
            {
                l=mid+1;
            }

        }
        return ans;
    }
};