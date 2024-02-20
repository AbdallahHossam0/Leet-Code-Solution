class Solution {
public:
    int missingNumber(vector<int>& nums) {
        size_t ans{nums.size()};
        int i{};
        for(; i < nums.size(); ++i){
            ans += i - nums[i];
        }
        return ans;
    }
};