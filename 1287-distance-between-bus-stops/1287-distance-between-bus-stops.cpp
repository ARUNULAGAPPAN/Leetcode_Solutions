class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total = accumulate(distance.begin(), distance.end(), 0);
        int clockwise = 0, n = distance.size();
        while (start != destination) {
            clockwise += distance[start];
            start = (start + 1) % n;
        }
        return min(clockwise, total - clockwise);
    }
};