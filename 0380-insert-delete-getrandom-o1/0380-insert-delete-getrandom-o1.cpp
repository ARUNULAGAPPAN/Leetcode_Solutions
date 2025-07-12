class RandomizedSet {
private:
    vector<int> a;
    unordered_map<int, int> m;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (m.count(val)) 
            return false;
        a.push_back(val);
        m[val] = a.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (!m.count(val))
            return false;
        int last = a.back();
        a[m[val]] = last;
        m[last] = m[val];
        a.pop_back();
        m.erase(val);
        return true;
    }

    int getRandom() {
        return a[rand() % a.size()];
    }
};
