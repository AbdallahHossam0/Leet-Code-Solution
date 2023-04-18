// Two pointer approach

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        size_t size{nums.size()};
        vector<int> squared(size);
        int l{0};
        int r{static_cast<int>(size) -1};

        for(int i {static_cast<int>(size) - 1}; i >= 0; --i){
            if(abs(nums[l]) > abs(nums[r])){
                squared[i] = nums[l] * nums[l];
                l++;
            }
            else{
                squared[i] = nums[r] * nums[r];
                r--;
            }
        }

        return squared;
    }
};