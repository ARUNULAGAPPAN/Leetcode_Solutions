class Solution {
public:
    string oddString(vector<string>& words) {
        int n=words.size();
        int m=words[0].size();
        vector<int>a1,a2;
        for(int i=0;i<m-1;i++){
            a1.push_back(words[0][i+1]-words[0][i]);
            a2.push_back(words[1][i+1]-words[1][i]);
        }
        bool res=false;
        if(a1==a2){
            res=true;
        }
        for(int i=2;i<n;i++){
            vector<int>p;
            for(int j=0;j<m-1;j++){
                p.push_back(words[i][j+1]-words[i][j]);
            }
            if(res&&(a2!=p)){
                return words[i];
            }
            else if(!res&&(p==a1&&p!=a2)){
                return words[1];
            }else if(!res&&(p==a2&&p!=a1)){
                return words[0];
            }
        }
        return "";
    }
};