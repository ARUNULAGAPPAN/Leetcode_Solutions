class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1 = a.size(), n2 = b.size();

        // Ensure a is the smaller array
        if (n1 > n2) return findMedianSortedArrays(b, a);

        int total = n1 + n2;
        int half = (total + 1) / 2;

        int low = 0, high = n1;

        while (low <= high) {
            int mid1 = (low + high) / 2;
            int mid2 = half - mid1;

            int l1 = (mid1 == 0) ? INT_MIN : a[mid1 - 1];
            int l2 = (mid2 == 0) ? INT_MIN : b[mid2 - 1];
            int r1 = (mid1 == n1) ? INT_MAX : a[mid1];
            int r2 = (mid2 == n2) ? INT_MAX : b[mid2];

            if (l1 <= r2 && l2 <= r1) {
                if (total % 2 == 1) {
                    return max(l1, l2);
                } else {
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                }
            }
            else if (l1 > r2) {
                high = mid1 - 1;
            } else {
                low = mid1 + 1;
            }
        }

        return 0.0; // This line should never be reached
    }
};
