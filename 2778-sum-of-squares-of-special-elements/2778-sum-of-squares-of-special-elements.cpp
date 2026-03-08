class Solution {
public:
  int sumOfSquares(vector<int>& A) {
    int res = 0, sz = size(A);
    for(int i = 1;i * i <= sz; ++i) {
        if(sz % i == 0) {
            res += A[i - 1] * A[i - 1];
            int div = sz / i;
            if(div != i) 
                res += A[div - 1] * A[div - 1];
        }
    }
    return res;
}
};