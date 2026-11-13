class Solution {
public:
    bool digitCount(string num) {
        int n=num.length();
        vector<int> x(10,0);
        for(int i=0;i<n;i++){
            x[num[i]-'0']++;
        }
        for(int i=0;i<n;i++){
            if(x[i]!=(num[i]-'0')) return false;
        }
        return true;
    }
};