class Solution {
public:
    string toHex(int num) {
        if(!num)return "0";

        string ans = "";
        string hex = "0123456789abcdef";
        uint32_t n = static_cast<uint32_t> (num);

        while(n){
            int r = n % 16;
            ans = hex[r] + ans;
            n /= 16;
        }
        return ans;
    }
};