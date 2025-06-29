class Solution {
public:
    bool isVowel(char c)
    {
        unordered_set<char>set={'a','e','i','o','u','A','E','I','O','U'};
        return set.count(c);
    }
    string reverseVowels(string s) {
        int left =0,right=s.size()-1;

        while(left<=right)
        {
            if(!isVowel(s[left])) left++;
            else if(!isVowel(s[right])) right--;
            else {
                swap(s[left],s[right]);
                left++;
                right--;
            } 
        }
        return s;
    }
};