class Solution {
public:
    string freqAlphabets(string s) {
        stack<int> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '#') {
                st.push(s[i] - '0');
            } else {
                string r;
                r += (st.top()) + '0';
                st.pop();
                r += (st.top()) + '0';
                st.pop();

                reverse(r.begin(), r.end());
                st.push(stoi(r));
            }
        }

        string ans;
        int len = st.size();

        while (len-- > 0) {
            int num = st.top();
            st.pop();
            ans += ('a' + (num - 1));
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};