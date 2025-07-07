class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        ranges::sort(events);

        priority_queue<int,vector<int>,greater<int>>pq;
        int day=0,ind =0,n=events.size(),ans=0;

        while(!pq.empty() || ind < n)
        {
            if(pq.empty())
            {
                day = events[ind][0];
            }
            while(ind < n && events[ind][0] <= day)
            {
                pq.push(events[ind][1]);
                ind++;
            }
            pq.pop();
            ans++;
            day++;
            while(! pq.empty() && pq.top() < day)
            {
                pq.pop();
            }
        }
        return ans;
    }
};