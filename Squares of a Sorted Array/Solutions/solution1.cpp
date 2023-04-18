class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        size_t size{nums.size()};
        vector<int> squared(size, -1);
        int l{0};
        int r{static_cast<int>(size) -1};
        for(int i{}; i < size; i++){

            if(nums[i] < 0){
                for(; r >= l; r--){
                    if(nums[r] <= -nums[i] && nums[r] != 0){
                        squared[r--] = nums[i] * nums[i];
                        break;
                    }
                }   
            }
            else{
                for(; l < size; l++){
                    if(squared[l] == -1){
                        squared[l++] = nums[i] * nums[i];
                        break;
                    }

                }
            }

        }
        if(is_sorted(squared.begin(), squared.end()))
            return squared;
            else{
                sort(squared.begin(), squared.end());
                return squared;

            }
    }
};