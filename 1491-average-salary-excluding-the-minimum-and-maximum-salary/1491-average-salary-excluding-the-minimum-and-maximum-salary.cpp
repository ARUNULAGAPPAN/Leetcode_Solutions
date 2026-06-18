class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        long long int sum = 0;

        sort(salary.begin(), salary.end());

        if (n == 3) return salary[1];

        for (int i = 1; i <= n - 2; i++) {
            sum += salary[i];
        }

        return (double)sum / (n - 2);
    }
};