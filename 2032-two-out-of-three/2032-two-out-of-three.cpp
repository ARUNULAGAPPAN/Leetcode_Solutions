class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        unordered_set<int> s3(nums3.begin(),nums3.end());

        unordered_map<int,int> freq;
        for(auto i : s1){
            freq[i]++;
        }
        for(auto i : s2){
            freq[i]++;
        }
        for(auto i : s3){
            freq[i]++;
        }

        vector<int> result;
        for(auto i : freq){
            if(i.second >= 2){
                result.push_back(i.first);
            }
        }
        return result;
    }
};