class Solution {
public:
    double average(vector<int>& v) {
        auto pair{minmax_element(begin(v), end(v))};
        return (static_cast<double>(accumulate(begin(v), end(v), 0)) - *pair.first - *pair.second) / (v.size() -2);
    }
};