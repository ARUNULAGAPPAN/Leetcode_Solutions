// LeetCode-style C++ solution
class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left++]);
            } else {
                temp.push_back(arr[right++]);
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left++]);
        }

        while (right <= high) {
            temp.push_back(arr[right++]);
        }

        for (int i = low; i <= high; ++i) {
            arr[i] = temp[i - low];
        }
    }

    int countPairs(vector<int> &arr, int low, int mid, int high) {
        int right = mid + 1;
        int cnt = 0;
        for (int i = low; i <= mid; ++i) {
            while (right <= high && (long long)arr[i] > 2LL * arr[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int mergeSort(vector<int> &arr, int low, int high) {
        if (low >= high) return 0;

        int mid = (low + high) / 2;
        int count = 0;

        count += mergeSort(arr, low, mid);
        count += mergeSort(arr, mid + 1, high);
        count += countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
