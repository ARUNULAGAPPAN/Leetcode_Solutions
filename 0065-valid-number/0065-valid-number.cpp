#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        int i = 0, n = s.length();

        // Remove leading spaces
        while (i < n && s[i] == ' ') i++;
        
        // Optional sign
        if (i < n && (s[i] == '+' || s[i] == '-')) i++;

        bool isNumeric = false, isDecimal = false;

        // Integer and decimal part
        while (i < n && isdigit(s[i])) {
            isNumeric = true;
            i++;
        }

        // Decimal part
        if (i < n && s[i] == '.') {
            i++;
            while (i < n && isdigit(s[i])) {
                isNumeric = true;
                i++;
            }
        }

        // Exponent part
        if (isNumeric && i < n && (s[i] == 'e' || s[i] == 'E')) {
            i++;
            isNumeric = false;

            // Optional sign in exponent
            if (i < n && (s[i] == '+' || s[i] == '-')) i++;

            while (i < n && isdigit(s[i])) {
                isNumeric = true;
                i++;
            }
        }

        // Skip trailing spaces
        while (i < n && s[i] == ' ') i++;

        return isNumeric && i == n;
    }
};