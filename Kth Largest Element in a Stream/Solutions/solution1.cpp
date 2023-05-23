class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : num{k - 1}, v{move(nums)}{
        sort(begin(v), end(v), greater<>());
    }
    
    int add(int val) {
        auto it {lower_bound(begin(v), end(v), val, greater<>())};
        v.insert(it, val);
        return v[num];
    }
private:
    vector<int> v;
    int num;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */