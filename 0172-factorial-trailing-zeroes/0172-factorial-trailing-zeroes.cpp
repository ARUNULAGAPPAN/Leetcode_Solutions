class Solution {
public:
    int trailingZeroes(int n) {
        //concept easy  quotient of 5;

        int c=0;

        while(n>0){
            n = n/5; //Q
            c= c + n;
        }
        return c;
        //Mathematical concept
        
    }
};