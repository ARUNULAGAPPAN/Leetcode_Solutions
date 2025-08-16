class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        
        for (char &c : s) {
            if (c == '6') { 
                c = '9';   // change the first 6 into 9
                break;     // only one change allowed
            }
        }
        
        return stoi(s); // convert back to integer
    }
};
