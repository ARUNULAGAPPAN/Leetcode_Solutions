class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int size = s.size();
        int n = size/k;
        int m = size%k;
        int i=0;
        for(i=0;i<n;i++)
        {
            ans.push_back(s.substr(i*k,k));
        }
        if(m>0)
        {
        ans.push_back(s.substr(i*k,m)+string(k-m,fill));
        }
        return ans;
    }
};