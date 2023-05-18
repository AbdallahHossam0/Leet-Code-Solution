=class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i {};
        for(auto num : nums){
            if(num != 0){
                ans[i++] = num;
            }
        }
        nums = move(ans);
        return;
    }
};