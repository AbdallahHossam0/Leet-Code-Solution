// this is solutions is good for runtime ^^
// but not good for memory :'(

class Solution {
public:
vector<int> findDisappearedNumbers(vector<int> &nums) {
    size_t vecSize{nums.size()};
    vector<int> x(vecSize, 1);
    vector<int> y;
    for (int i{}; i < vecSize; ++i) {
        x[nums[i] - 1] = 0;
    }

    for (int i{}; i < vecSize; i++) {
        if (x[i]) {
            y.push_back(i + 1);
        }
    }

    return y;
}
};