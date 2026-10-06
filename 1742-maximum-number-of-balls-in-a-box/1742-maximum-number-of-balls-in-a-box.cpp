class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int n, temp, sum, max = 0;
        int arr[46] = {0};
        for(int i = lowLimit; i <= highLimit; i++){
            n = i;
            sum = 0;
            while(n != 0){
                temp = n % 10;
                n = n / 10;
                sum += temp;
            }
            arr[sum]++;
        }
        for(int i = 0; i < 46; i++){
            if(arr[i] > max) max = arr[i];
        }
        return max;
    }
};

//1,00,000-1 = 99,999
//sum = 45