
class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> digitSumCount;

        for (int i = 1; i <= n; ++i) {
            int sum = digitSum(i);
            digitSumCount[sum]++;
        }
        int maxSize = 0;
        for (auto& [a,c]: digitSumCount) {
            maxSize = max(maxSize, c);
        }
        int result = 0;
        for (auto& [a,c] : digitSumCount) {
            if (c == maxSize) 
                result++;
        }

        return result;
    }
    int digitSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};
