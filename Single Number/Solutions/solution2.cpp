class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> x;

        for(int i{}; i < nums.size(); ++i){
            x[nums[i]]++;
        }
        for(int i{}; i < nums.size(); ++i){
            if(x[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};