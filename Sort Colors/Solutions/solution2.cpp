class Solution {
public:
    void sortColors(vector<int>& nums) {
        unsigned short r{};
        unsigned short w{};
        unsigned short b{};

        for(auto num: nums){
            if(num){
                (num == 1) ? w++ : b++;
            }
            else{
                r++;
            }
        }


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