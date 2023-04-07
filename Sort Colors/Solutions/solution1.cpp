class Solution {
public:
    void sortColors(vector<int>& nums) {
        long r{count(nums.begin(), nums.end(), 0)};
        long w{count(nums.begin(), nums.end(), 1)};
        long b{count(nums.begin(), nums.end(), 2)};

        
        int i{};
        for(; i <r; ++i){
            nums[i] = 0;
        }
        for(i = 0; i < w; ++i){
            nums[i + r] = 1;
        }
        for(i = 0; i < b; ++i){
            nums[i + r + w] = 2;
        }
    }
};