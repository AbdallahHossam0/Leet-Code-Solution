class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        uint16_t ans{};
        uint16_t n{static_cast<uint16_t>(nums.size())};
        for(uint16_t i{}; i < n - 1; ++i){
            for(uint16_t j{static_cast<uint16_t>(i + 1)}; j < n; ++j){
                if((nums[i] == nums[j]) && (((i * j) % k) == 0 )){ // Using short-circuit technique
                    ++ans;
                }
            }
        }
        return ans;
    }
};
