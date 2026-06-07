class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector <int> map(1001, 0);
        for (int i = 0; i < target.size(); i++) {
            map[target[i]]++;
            map[arr[i]]--;
        }
        return (count(map.begin(), map.end(), 0) == 1001);
    }
};