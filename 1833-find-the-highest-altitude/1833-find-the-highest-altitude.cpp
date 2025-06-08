class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>alt;
        alt.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            alt.push_back(alt.back()+gain[i]);
        }
        return *max_element(alt.begin(),alt.end());
    }
};