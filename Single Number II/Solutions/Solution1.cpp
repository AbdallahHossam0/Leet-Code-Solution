class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        for(int i{}; i < nums.size() - 3; i += 3){
            if(nums[i] != nums[i + 1]){
                return nums[i];
            }
        }
        return nums[nums.size() - 1];
    }
};