class Solution {
public:
    bool hasAlternatingBits(uint32_t n) {
        uint32_t v = n + (n>>1);
        return (v & v+1)==0;
        
    }
};