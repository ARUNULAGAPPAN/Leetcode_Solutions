class Solution {
public:
    int calculate(string s) {
        stack<int>st;
         int n =0,sign =1,ans=0;

         for(char c: s){
            if(isdigit(c)){
                n = n*10 + (c-'0'); //char to int
            }
            else if( c== '+'){
                ans += sign*n;
                n = 0;
                sign =1;
            }
            else if( c== '-'){
                ans  += sign*n;
                n =0;
                sign = -1;
            }
            else if( c== '('){
                st.push(ans);
                st.push(sign);
                ans =0;
                sign =1;
            }
            else if( c==')'){
                ans += sign*n;
                n =0;
                ans *= st.top(); st.pop(); //sign;
                ans += st.top(); st.pop(); //number;
            }
         }
         if(n != 0){
            ans += sign*n;
         }
         return ans;
    }
};