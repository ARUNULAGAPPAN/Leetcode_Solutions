class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;
        while(num>0)
        {
            int d = num % 10;
            temp.push_back(d);
            num = num / 10;
        }
        sort(temp.begin(),temp.end());
        int x = temp[0] * 10 + temp[3];
        int y = temp[1] * 10 + temp[2];
        return x+y;
    }

};