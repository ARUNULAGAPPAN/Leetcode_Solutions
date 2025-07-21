class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=0,j=0;
        vector<int> num;
       while(i<m && j<n)
       {
        if(nums1[i] < nums2[j])
        {
            num.push_back(nums1[i]);
            i++;
        }
        else
        {
             num.push_back(nums2[j]);
            j++;
        }
       }
       while(i<m)
       {
        num.push_back(nums1[i]);
        i++;
       }
        while(j<n)
       {
        num.push_back(nums2[j]);
        j++;
       }
        for (int k = 0; k < n+m; k++) {
            nums1[k] = num[k];
        }
   
    }
};