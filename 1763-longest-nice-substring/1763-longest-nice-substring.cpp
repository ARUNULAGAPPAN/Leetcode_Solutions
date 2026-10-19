class Solution {
public:

    bool HasOppositeCaseCharacter(const char character, const string& string)
    {
        static const char caseDifference  = 'a' - 'A';

        for (const char currentCharacter  : string)
        {
            if (currentCharacter  == character + caseDifference || currentCharacter  == character - caseDifference)
            {
                return true;
            }
        }

        return false;
    }

    string FindLongestNiceSubstring(string s)
    {
        if (s.size() <= 1) return "";

        string leftSubstring = "";
        string rightSubstring = "";

        for (int characterIndex = 0; characterIndex < s.size(); ++characterIndex)
        {
            if (!HasOppositeCaseCharacter(s[characterIndex], s))
            {
                for (int i = 0; i < characterIndex; ++i)
                {
                    leftSubstring.push_back(s[i]);
                }

                for (int i = characterIndex + 1; i < s.size(); ++i)
                {
                    rightSubstring.push_back(s[i]);
                }

                break;
            }
        }

        if (leftSubstring == "" && rightSubstring == "") return s;

        leftSubstring = FindLongestNiceSubstring(leftSubstring);
        rightSubstring = FindLongestNiceSubstring(rightSubstring);

        if (leftSubstring.size() >= rightSubstring.size())
        {
            return leftSubstring;
        }

        return rightSubstring;
    }

    string longestNiceSubstring(string s) {
       
       return FindLongestNiceSubstring(s);
    }
};