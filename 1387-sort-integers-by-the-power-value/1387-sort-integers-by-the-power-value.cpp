class Solution {
public:
    static bool comp(pair<int, int>& a, pair<int, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;
        else
            return a.second < b.second;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> vc;
        for (int i = lo; i <= hi; i++) {
            int count = 0;
            int num = i;
            while (num != 1) {
                if (num % 2 == 0)
                    num /= 2;
                else
                    num = 3 * num + 1;
                count++;
            }
            vc.push_back({i, count});
        }
        sort(vc.begin(), vc.end(), comp);

        return vc[k - 1].first;
    }
};