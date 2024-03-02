class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for_each(begin(nums), end(nums), [](int& num){ num *= num;});
        sort(begin(nums), end(nums));
        return nums;
    }
};