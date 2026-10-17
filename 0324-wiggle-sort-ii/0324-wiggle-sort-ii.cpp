class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());

        int j = (v.size() - 1) / 2;
        int k = v.size() - 1;

        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){
                nums[i] = v[j];
                j--;
            }
            else{
                nums[i] = v[k];
                k--;
            }
        }
    }
};