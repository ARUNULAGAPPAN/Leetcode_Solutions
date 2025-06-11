class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for (int i = left; i <= right; i++) //outer loop
        {
            int num = i;
            bool isValid = true;

            while (num > 0) //logic to check contain zero
            {
                int digit = num % 10;
                if (digit == 0 || i % digit != 0)
                {
                    isValid = false;
                    break;
                }
                num /= 10;
            }

            if (isValid) 
                 ans.push_back(i);
        }
        return ans;
    }
};
