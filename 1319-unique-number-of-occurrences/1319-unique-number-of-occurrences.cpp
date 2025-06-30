class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;     

        for (int n : arr) {
            map[n]++;
        }

        unordered_map<int, int> map1;   
        vector<int> ans;

        for (auto& [a, c] : map) {
            map1[c]++;       
            ans.push_back(c); 
        }

        for (int i = 0; i < ans.size(); i++) {
            if (map1[ans[i]] > 1) {  
                return false;
            }
        }

        return true;
    }
};
