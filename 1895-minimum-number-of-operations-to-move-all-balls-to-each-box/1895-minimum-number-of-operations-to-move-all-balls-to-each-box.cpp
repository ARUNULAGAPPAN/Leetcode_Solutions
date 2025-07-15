class Solution {
public:
    vector<int> minOperations(string boxes) {
       int n = boxes.size();
       vector<int>pos;
       for(int i =0;i<n;i++)
       {
         if(boxes[i]=='1')
         {
            pos.push_back(i);
         }
       } 
        vector<int>ans;
       for(int i=0;i<n;i++)
       {
        int sum =0;
        for(int j : pos)
        {
            int d = abs(i-j);
            sum +=d;
        }
        ans.push_back(sum);
       }
       return ans;
    }

};