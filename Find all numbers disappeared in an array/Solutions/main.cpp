#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

using namespace std;

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

int main(void) {
    vector<int> nums{1, 1};
    vector<int> x{findDisappearedNumbers(nums)};
    for (int i{}; i < x.size(); ++i) {
        cout << x[i] << endl;
    }
}