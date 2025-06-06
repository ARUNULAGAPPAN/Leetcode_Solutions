class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
      int total = duration;
       int n = timeSeries.size();
       for(int i=1;i<n;i++)
       {
          int gap = timeSeries[i] -timeSeries[i-1];
          total = total + min(gap, duration);
       }   
       return total;
    }
};