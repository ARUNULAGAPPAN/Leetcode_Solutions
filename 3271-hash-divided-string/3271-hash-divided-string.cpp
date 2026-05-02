class Solution {
public:
    char getHashChar(int n) {
        if(n == 0) return 'a';
        else if(n == 1) return 'b';
        else if(n == 2) return 'c';
        else if(n == 3) return 'd';
        else if(n == 4) return 'e';
        else if(n == 5) return 'f';
        else if(n == 6) return 'g';
        else if(n == 7) return 'h';
        else if(n == 8) return 'i';
        else if(n == 9) return 'j';
        else if(n == 10) return 'k';
        else if(n == 11) return 'l';
        else if(n == 12) return 'm';
        else if(n == 13) return 'n';
        else if(n == 14) return 'o';
        else if(n == 15) return 'p';
        else if(n == 16) return 'q';
        else if(n == 17) return 'r';
        else if(n == 18) return 's';
        else if(n == 19) return 't';
        else if(n == 20) return 'u';
        else if(n == 21) return 'v';
        else if(n == 22) return 'w';
        else if(n == 23) return 'x';
        else if(n == 24) return 'y';
        else if(n == 25) return 'z';
        else return '?';
    }
    string stringHash(string s, int k) {
        int sum = 0;
        int cnt = 0;
        string ans = "";

        for(int i = 0; i < s.size(); i++){
            int pos = s[i] - 'a';
            sum += pos;
            cnt++;
            if(cnt == k){
                int x = sum % 26;
                char ch = getHashChar(x);
                ans += ch;
                cnt = 0;
                sum = 0;
            }
        }

        return ans;
    }
};