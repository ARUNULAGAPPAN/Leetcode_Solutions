class Solution {
public:
    bool checkDivisibility(int n) {

        int sum = 0;
        int product = 1;
        int temp = n;
        while(temp > 0) {
            int digit = temp % 10;   // last digit nikaala
            sum += digit;            // sum me add kiya
            product *= digit;        // product me multiply kiya
            temp /= 10;              // next digit par jaane ke liye
        }

        int total = sum + product;

        return (n % total == 0);
    }
};