class Solution {
public:
    bool judgeCircle(string moves) {
     int cl=0,cr=0,cu=0,cd=0;
     for(int i=0;i<moves.size();i++)
     {
        if(moves[i]=='L')
        {
            cl++;
        }
        else if(moves[i]=='R')
        {
            cr++;
        }
        else if(moves[i]=='U')
        {
            cu++;
        }
        else
        {
            cd++;
        }
     }   
    return cd==cu && cl==cr;
    }
};