class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(begin(nums), end(nums));

        for(int i{}; i < nums.size() - 1; i +=2){
            if(nums[i] != nums[i + 1]){
                return nums[i];
            }
        }
        return nums[nums.size() - 1];
    }
};