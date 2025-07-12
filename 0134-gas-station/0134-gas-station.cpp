class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int ans =0;
        int temp1 =0, temp2=0;

        for(int i=0;i<n;i++){
            temp2 += gas[i] - cost[i];
            temp1 += gas[i] - cost[i];
            
            if(temp1 < 0){
                ans = i+1;
                temp1 =0;
            }
        }
        if(temp2<0){
            return -1;
        }
        if(ans >= n){
            return -1;
        }
        else{
            return ans;
        }
    }
};