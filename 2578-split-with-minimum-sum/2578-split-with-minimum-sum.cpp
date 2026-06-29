class Solution {
public:
    int splitNum(int num) {
        int num1 = 0, num2 = 0;
        string s = to_string(num);
        sort(s.begin(), s.end());
        for(int i=0; i<s.size(); i++) {
            if(i & 1) num2 = num2*10 + s[i] - '0';
            else num1 = num1*10 + s[i] - '0';
        }
        return num1 + num2;
    }
};