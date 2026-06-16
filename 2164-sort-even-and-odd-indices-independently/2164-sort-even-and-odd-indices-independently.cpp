class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>o;
        vector<int>e;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                e.push_back(nums[i]);
            else
                o.push_back(nums[i]);
        }

        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        reverse(o.begin(),o.end());
        int l=0,k=0;
        
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                 nums[i] =e[l];
                 l++;
            }
               
            else
            {
                nums[i]=o[k];
                k++;
            }
        }
        return(nums);
    }
};