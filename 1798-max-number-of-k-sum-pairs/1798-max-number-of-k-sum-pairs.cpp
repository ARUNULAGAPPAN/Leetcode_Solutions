class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c=0;
        ranges::sort(nums);

        int left =0,right=nums.size()-1;

        while(left <right)
        {
            int n = nums[left]+nums[right];
            if(n==k)
            {
                left++;right--;
                c++;
            }
           else if(n>k)
            {
               right--;
            }
            else
            {
                left++;
            }
        }
        return c;
    }

};