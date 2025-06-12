class Solution {
public:
    int countDigits(int num) {
        
        int coun=0;
        int x=num;
        while(num>0)
        {
         int b=num%10; num/=10;
         if(x%b==0)
          coun++;
        }
        return coun;
    }
};