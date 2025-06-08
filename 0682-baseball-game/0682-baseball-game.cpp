class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>s;
        for(int i=0;i<operations.size();i++)
        { char c = operations[i][0];  //string to char
            if(c=='C') s.pop_back();
            else if(c=='D') s.push_back(s.back()*2);
            else if(c=='+') s.push_back(s.back() + s[s.size()-2]);
            else s.push_back(stoi(operations[i]));
        }
        int ans=0;
        for(int n: s)
        {
            ans = ans + n;
        }
        return ans;
        
    }
};