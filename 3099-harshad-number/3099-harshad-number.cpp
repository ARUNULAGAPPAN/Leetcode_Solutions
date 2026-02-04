class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int tempNum = x;
        while (x > 0) {
            int digit = x % 10;
            sum += digit;
            x = x / 10;
        }

        if (tempNum % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    }
};