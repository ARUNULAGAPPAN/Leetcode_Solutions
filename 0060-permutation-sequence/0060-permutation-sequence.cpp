class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> number;
        for(int i = 1;i <= n;i++){
            number.push_back(i);
        }
        
        //factorial
        vector<int> fact(n+1,1);
        for(int i = 1;i <= n;i++){
            fact[i] = fact[i - 1] * i;
        }
        
        string ans = "";
        
        for(int i = n; i>= 1;i--){
            int f = fact[i-1];
            int index = (k - 1)/f;
            ans += to_string(number[index]);
            number.erase(number.begin() + index);
            k = k - index * f;
        }
    
        return ans;
    }
};