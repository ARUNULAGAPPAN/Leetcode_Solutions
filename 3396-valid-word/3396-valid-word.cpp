class Solution {
public:
    bool isValid(string word) {
        return lenCheck(word) && onlyDigLet(word) && containVowel(word) && containConsonant(word);
    }

    bool lenCheck(string word) {
        return word.size() >= 3;
    }

    bool onlyDigLet(string word) {
        for (char c : word) {
            if (!isalnum(c)) {
                return false;
            }
        }
        return true;
    }

    bool containVowel(string word) {
        for (char c : word) {
            char d = tolower(c);
            if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u') {
                return true;
            }
        }
        return false;
    }

    bool containConsonant(string word) {
        for (char c : word) {
            char d = tolower(c);
            if ((d >= 'a' && d <= 'z') && (d != 'a' && d != 'e' && d != 'i' && d != 'o' && d != 'u')) {
                return true;
            }
        }
        return false;
    }
};
