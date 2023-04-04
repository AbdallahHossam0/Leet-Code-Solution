class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        size_t vecSize {nums.size()};
        int sum1{};
        int sum2{};
        int j{};
        int k{};
        for(int i{}; i < vecSize; ++i){
            for(j = 0; j < i; ++j){
                sum1 += nums[j];
            }

            for(k = i + 1; k < vecSize; ++k){
                sum2 += nums[k];
            }

            if(!(sum1 ^ sum2)){
                return i;
            }
            sum1 = sum2 = 0;
        }

        return -1;
    }
};