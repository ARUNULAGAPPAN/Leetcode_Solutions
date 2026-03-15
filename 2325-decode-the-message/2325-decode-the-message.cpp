class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        char c = 'a';

        // Build substitution mapping from key
        for(char ch : key){
            if(ch != ' ' && !m.count(ch)){
                m[ch] = c++;
            }
        }

        // Decode the message
        for(int i = 0; i < message.size(); i++){
            if(message[i] != ' ')
                message[i] = m[message[i]];
        }

        return message;
    }
};