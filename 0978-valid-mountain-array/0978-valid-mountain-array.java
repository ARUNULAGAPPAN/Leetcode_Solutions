class Solution {
    public boolean validMountainArray(int[] arr) {
        int maxidx = -1;
        int max = -1;
        int n = arr.length;
        if(n<3) return false;
        for(int i = 0 ; i< n ; i++){
            if(arr[i] > max){
                max = arr[i];
                maxidx = i;
            }
        }
        if(maxidx == 0 || maxidx == n-1 ) return false;
        for(int i = maxidx ; i<n-1 ; i++){
            if(arr[i] <= arr[i+1]) return false;
        }
        for(int i = maxidx ; i>0 ; i--){
            if(arr[i] <= arr[i-1]) return false;
        }
        return true;
    }
}