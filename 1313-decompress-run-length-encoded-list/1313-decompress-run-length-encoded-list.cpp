#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> result;
        for (size_t i = 0; i < nums.size(); i += 2) {
            result.insert(result.end(), nums[i], nums[i + 1]);
        }
        return result;
    }
};

