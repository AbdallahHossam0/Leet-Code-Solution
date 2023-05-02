class Solution {
public:
    int arraySign(vector<int>& nums) {
        unsigned short prod{};
        for(int i{}; i < nums.size(); ++i){
            if(nums[i] < 0) ++prod;
            else if(nums[i] == 0) return 0;
            else{
                continue;
            }
        }
        return (prod % 2) ? -1 : 1;
    }
};