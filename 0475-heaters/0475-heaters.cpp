class Solution {
public:
bool check(vector<int>& houses, vector<int>& heaters,int mid)
{
    int j = 0;
    int m = heaters.size();
     for (int i = 0; i < houses.size(); i++) {
            while (j < m && heaters[j] + mid < houses[i]) {
                j++;
            }

            if (j == m) return false;

            if (heaters[j] - mid > houses[i]) return false;
        }

    return true;
}
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int low=0;
        int high = 1e9;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=high-(high-low)/2;
            if(check(houses,heaters,mid))
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    
    }
};