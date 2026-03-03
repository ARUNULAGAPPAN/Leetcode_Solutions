class OrderedStream {
    vector<string> buffered;
    int sendIdx;
public:
    OrderedStream(int n) {
        buffered.resize(n);
        sendIdx = 0; 
    }
    vector<string> insert(int idKey, const string& value) {
        buffered[idKey - 1] = value;

        if (buffered[sendIdx].size() == 0)
            return {}; 
        vector<string> sentBuffer;
        while (sendIdx < buffered.size() && buffered[sendIdx].size() > 0)
            sentBuffer.push_back(buffered[sendIdx++]);
        return sentBuffer;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */