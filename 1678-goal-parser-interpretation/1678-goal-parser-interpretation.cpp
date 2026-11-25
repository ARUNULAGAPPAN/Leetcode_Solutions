class Solution {
public:
    string interpret(string c) {
        string x="";
        for(int i=0;i<c.length();i++){
            if(c[i]=='('){
                if(c[i+1]==')'){
                    x=x+'o';
                }
            }
            else if(c[i]!=')'){
                x=x+c[i];
            }
        }
        return x;
    }
};