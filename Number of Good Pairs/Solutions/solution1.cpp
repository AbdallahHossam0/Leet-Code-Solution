class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        size_t n{nums.size()};
        int ans{};
        for(int i{}; i < n - 1; ++i){
            for(int j {i + 1}; j < n; ++j){
                if(nums[i] == nums[j]){
                    ++ans;
                }
            }
        }
        return ans;
    }
};