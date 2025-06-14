class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int start =0;
       int end = letters.size()-1;
       while(start <= end)
       {
        int mid = start + (end - start)/2;

        target<letters[mid] ? end = mid -1 : start = mid +1;
       } 
       return letters[start % letters.size()];
    }
};