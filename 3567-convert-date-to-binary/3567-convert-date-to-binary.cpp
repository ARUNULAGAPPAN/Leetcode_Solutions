class Solution {
public:
    string bin (int n){
        string bin = "";
        while(n){
           bin = to_string(n%2)+ bin;
            n /= 2;
        }
        return bin;
    }
    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        return bin(y) + '-' + bin(m) + '-' + bin(d);
    }
};