class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        map<int, int> similarItems;
        for(const auto& item : items1) {
            similarItems[item[0]] += item[1];
        }
        for(const auto& item : items2) {
            similarItems[item[0]] += item[1];
        }
        for(auto const& [value, weight] : similarItems) {
            ans.push_back({value, weight});
        }

        return ans;
    }
};