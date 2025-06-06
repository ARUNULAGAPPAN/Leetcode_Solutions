class Solution {
public:
    bool checkRecord(string s) {
        stack<char>st;
        int cL=0,cA=0;
        for(char c : s)
        {
          st.push(c);
        }
        while(!st.empty())
        {  char t = st.top();
        st.pop();
            if(t =='L')
            {    cL++;
                if(cL==3)
                {
                    return false;
                }
            
            }
            if(t!= 'L')
            {
                cL =0;
            }
            if(t=='A')
            {cA++;
                if(cA==2)
                {
                    return false;
                }
                
            }
        }
        return true;
        
    }
};