#define ll long long
class Solution {
public:
    struct pair_hash {
        size_t operator()(const pair<ll,ll>& p) const {
            return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
        }
    };

    unordered_map<pair<ll, ll>, bool, pair_hash> vis;
    bool recur(vector<int>& stones, ll unit, ll k = 1, ll idx = 0) {
        if (unit == stones.back()) return true; //  Reached the end

        if (vis.find({unit, k}) != vis.end()) return false; 
        while (idx < stones.size() && stones[idx] < unit) idx++;
        if (idx >= stones.size() || stones[idx] > unit) return false;
        if (k > 1) {
            bool a = recur(stones, unit + k - 1, k - 1, idx + 1);
            if (a) return true;
        }
        bool b = recur(stones, unit + k, k, idx + 1);
        if (b) return true;
        if (idx != 0) {
            bool c = recur(stones, unit + k + 1, k + 1, idx + 1);
            if (c) return true;
        }
        vis[{unit, k}] = true;
        return false;
    }

    bool canCross(vector<int>& stones) {
        return recur(stones, stones[0]);
    }
};