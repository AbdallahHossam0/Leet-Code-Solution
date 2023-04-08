class Solution {
public:
    void sortColors(vector<int>& nums) {
        unsigned short r{};
        unsigned short w{};
        unsigned short b{};
        unsigned short i{};

        for(i = 0; i < nums.size(); ++i){
            if(nums[i]){
                (nums[i] == 1) ? w++ : b++;
            }
            else{
                r++;
            }
        }



        for(i = 0; i <r; ++i){
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