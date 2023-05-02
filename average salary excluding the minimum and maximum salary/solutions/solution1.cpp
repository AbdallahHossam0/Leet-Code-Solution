class Solution {
public:
    double average(vector<int>& v) {
        int max{v[0]}, min{v[0]};
        int sum{v[0]};
        for(int i{1}; i < v.size(); ++i){
            if(max < v[i]) max = v[i];
            if(min > v[i]) min = v[i];
            sum += v[i];
        }
        return (sum - max - min) / static_cast<double>(v.size() - 2);
    }
};