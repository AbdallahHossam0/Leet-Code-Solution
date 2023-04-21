class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> x(nums.size());
        for(int i{}; i < nums.size(); ++i){
            x[i] = nums[nums[i]];
        }
        return x;
    }
};