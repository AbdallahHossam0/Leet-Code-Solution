class MyHashSet {
public:
    MyHashSet() {
        x.resize(1000001);
    }
    
    void add(int key) {
        x.at(key) = true;
    }
    
    void remove(int key) {
        x.at(key) = false;
    }
    
    bool contains(int key) {
        return x.at(key);
    }
private:
    vector<int> x;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */