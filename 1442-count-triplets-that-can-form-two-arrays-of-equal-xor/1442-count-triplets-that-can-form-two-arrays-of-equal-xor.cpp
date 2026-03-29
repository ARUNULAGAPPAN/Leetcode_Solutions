class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int xr_val = 0;
        map<int,int> count;
        map<int,int> total;
        count[0] = 1;
        int ans = 0;

        for(int i = 0; i<arr.size(); i++){
            xr_val ^= arr[i];
            ans += count[xr_val] * i - total[xr_val];
            count[xr_val]++;
            total[xr_val] += i+1;
        }
        return ans;
    }
};