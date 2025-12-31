class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        double ten = 1;
         vector<int>arr;
          while(n>0)
          {
             int ld = n%10;
              double num = ld * ten;
               if(num != 0)
               {
                 arr.push_back(num);
               }
               ten=ten*10;
               n=n/10;
    }reverse(arr.begin(), arr.end());
    return arr;
    }
};