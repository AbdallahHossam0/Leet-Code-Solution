class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        for(int i = 0; i < nums.size(); ++i){
            diff = target - nums[i];
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] == diff){
                    return{i, j};
                }
            }
        }
        return {-1, -1};
    }
};