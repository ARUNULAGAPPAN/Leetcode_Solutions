class Solution 
{
public:
    int minMaxDifference(int num) 
    {
        string n = to_string(num);

        char toReplaceMax = 0;
        for (char c : n) 
        {
            if (c != '9') 
            {
                toReplaceMax = c;
                break;
            }
        }
        string maxStr = n;
        if (toReplaceMax) 
        {
            for (char& c : maxStr) 
            {
                if (c == toReplaceMax) c = '9';
            }
        }

        char toReplaceMin = 0;
        for (char c : n) 
        {
            if (c != '0') 
            {
                toReplaceMin = c;
                break;
            }
        }
        string minStr = n;
        if (toReplaceMin) 
        {
            for (char& c : minStr) 
            {
                if (c == toReplaceMin) c = '0';
            }
        }

        return stoi(maxStr) - stoi(minStr);
    }
};
