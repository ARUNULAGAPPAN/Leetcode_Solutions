class Solution {
public:
    int bitwiseComplement(int n) {
        int m;
        int count = 0;
        m=n;
        if(n==0){
            return 1;
        }
        while(m !=0){
            m= m>>1;
            count++;
        }
        int i =0;
        while(i<count){
            n = n^(1<<i);
            i++;
        }
        return n;
    }
};