class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int x = left ; x <= right ; x++){
            bool found = false;

            for(int i = 0 ; i < ranges.size() ; i++){
                if(x >= ranges[i][0] && x <= ranges[i][1]){
                    found = true;
                    break;
                }
            }
        if(!found){
            return false;
        }
        }
        return true;
    }
};