class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res{};
        for(int i{}; i < nums.size(); ++i){
            res ^= nums[i];
        }
        return res;
    }
};