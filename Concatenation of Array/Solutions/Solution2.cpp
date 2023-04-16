class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto size{nums.size()};
        vector<int> x (size * 2, 0);
        for(int i{}; i < size; ++i){
            x[i] =x[i+size] = nums[i];
        }
        return x;
    }
};