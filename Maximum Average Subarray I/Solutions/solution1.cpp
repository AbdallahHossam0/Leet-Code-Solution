class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        double max{};
        int size {static_cast<int>(nums.size())};
        for(int i{size - k}; size; ++i){
            max += nums[i];
        }

        return max / k;

    }
};