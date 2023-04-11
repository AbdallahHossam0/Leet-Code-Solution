class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        size_t size{nums.size()};
        if(size < 2){
            return size;
        }
        int k{};
        for(int i{1}; i < size; ++i){
            if(nums[i - 1] != nums[i]){
                nums[++k] = nums[i];
            }
        }
        return ++k;
    }
};