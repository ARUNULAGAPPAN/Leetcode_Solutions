class Solution {
public:
    int getEqnValue(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3) {
        int x1 = p1.first;
        int x2 = p2.first;
        int x3 = p3.first;

        int y1 = p1.second;
        int y2 = p2.second;
        int y3 = p3.second;

        return (y3-y2)*(x2-x1) - (y2-y1)*(x3-x2);
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        int n = trees.size();
        sort(trees.begin(), trees.end());

        deque<pair<int, int>> upper;
        deque<pair<int, int>> lower;

        for(auto& point : trees){
            int lsize = lower.size();
            int usize = upper.size();

            while(lsize >= 2 && (getEqnValue(lower[lsize-2], lower[lsize-1], {point[0], point[1]}) < 0)){
                lsize--;
                lower.pop_back();
            }
            while(usize >= 2 && (getEqnValue(upper[usize-2], upper[usize-1], {point[0], point[1]}) > 0)){
                usize--;
                upper.pop_back();
            }

            lower.push_back({point[0], point[1]});
            upper.push_back({point[0], point[1]});
        }
        set<pair<int, int>> pts;
        for(auto& point : upper){
            pts.insert(point);
        }
        for(auto& point : lower){
            pts.insert(point);
        }

        vector<vector<int>> ans;
        for(auto& pt : pts){
            ans.push_back({pt.first, pt.second});
        }
        return ans;
    }

};