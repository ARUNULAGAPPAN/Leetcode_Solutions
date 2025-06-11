class Solution {
public:
    string maximumOddBinaryNumber(string s) {
     int n=s.size();
     int o = count(s.begin(),s.end(),'1');
     int z= n-o;

     return (string(o-1,'1')+string(z,'0')+'1');
    }
};