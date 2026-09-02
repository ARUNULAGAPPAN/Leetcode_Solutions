class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
    
        int s = tasks.size();
        int maxFreq = INT_MIN;
        int count = 0;

        vector<int>store(26,0);
        for(int i=0;i<s;i++)
        {
            int index = tasks[i] - 'A';
            store[index]++;
            if(store[index]>maxFreq)
            {
                maxFreq = store[index];
                count = 1;
            }
            else if(store[index] == maxFreq) count++;
        }

        return max(s,(n+1)*(maxFreq-1)+count);
    }
};