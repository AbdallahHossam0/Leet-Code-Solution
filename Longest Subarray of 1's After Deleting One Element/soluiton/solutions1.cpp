class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int zero{};
        int ans{};
        int start{};
        for(int i{}; i < nums.size(); ++i){
            zero += (nums[i] == 0);

            while(zero > 1){
                zero -= (nums[start] == 0);
                start++;
            }

            ans = max(ans, i - start);

        }

        return ans;

    }
};