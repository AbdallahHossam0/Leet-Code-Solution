class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vec;

        for(int i = 0; i < nums.length(); i += 2){
            for(int j{}; j < nums[i]; j++){
                vec.push_back(nums[i+1]);
            }
        }
        return vec;
    }
};