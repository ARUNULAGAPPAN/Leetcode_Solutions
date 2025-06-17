class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*
        unordered_map<int, int>map;
        for(int i=0;i<numbers.size();i++)
        {
            int c = target - numbers[i];
            if(map.count(c))
            {
                return {map[c]+1,i+1};
            }
            else
            {
                map[numbers[i]]=i;
            }
        }*/

        int l=0,r=numbers.size()-1;
        while(l<r){
            if(target == numbers[l]+numbers[r])
            {
                return {l+1,r+1};
            }
            else if(target < numbers[l]+numbers[r])
                {
                    r--;

                }
                else
                {
                    l++;
                }
        }
        return {};
    }
};