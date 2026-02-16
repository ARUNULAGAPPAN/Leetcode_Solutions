class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> v(101);
        for(int i : bulbs){
            v[i] = 1 - v[i];
        }
        vector<int> ans;
        for(int i=1;i<=100;i++){
            if(v[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};