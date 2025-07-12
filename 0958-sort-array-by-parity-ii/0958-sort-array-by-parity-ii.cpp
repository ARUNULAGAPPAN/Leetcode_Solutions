class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] %2 ==0){
                ans1.push_back(nums[i]);
            }
            else
            {
                ans2.push_back(nums[i]);
            }
        }
        vector<int>ans;
        int k=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(i%2 != 0 && k<ans2.size()){
                ans.push_back(ans2[k]);
                k++;
            }
            else if( i%2 == 0 && j<ans1.size()){
                ans.push_back(ans1[j]);
                j++;
            }
        }
        return ans;
    }
};