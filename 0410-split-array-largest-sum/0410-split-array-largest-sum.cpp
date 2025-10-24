class Solution {
private:
    bool splitArrayHelper(vector<int>& arr, int mid, int k) {
        int count = 1;
        long long total = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (total + arr[j] <= mid)
                total += arr[j];
            else {
                count++;
                total = arr[j];
            }
        }
        return count <= k;
    }
public:
    int splitArray(vector<int>& arr, int k) {
        if (k > arr.size()) return -1;

        int start = *max_element(arr.begin(), arr.end());
        int end = accumulate(arr.begin(), arr.end(), 0);

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (splitArrayHelper(arr, mid, k))
                end = mid - 1;
            else
                start = mid + 1;
        }
        return start;
    }
};