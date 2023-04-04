class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        size_t vecSize {nums.size()};
        int sum1{};
        int j{};
        for(int i{}; i < vecSize; ++i){
            for(j = 0; j < i; ++j){
                sum1 += nums[j];
            }

            for(j = i + 1; j < vecSize; ++j){
                sum1 -= nums[j];
            }

            if(!sum1){
                return i;
            }
            sum1 = 0;
        }

        return -1;
    }
};