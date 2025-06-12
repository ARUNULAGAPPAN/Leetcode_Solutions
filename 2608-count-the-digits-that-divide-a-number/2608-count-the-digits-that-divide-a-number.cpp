class Solution {
public:
    int countDigits(int num)
     {
    int x=num; int count=0;
    while(num>0)
    {
        int b=num%10; num/=10;
        if(x%b==0)count++;
    }    
    return count;
    }
};