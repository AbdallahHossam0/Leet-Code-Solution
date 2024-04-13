class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans{};

        int prod;

        for(int i{}; i < nums.size(); ++i){
            prod = 1;
            for(int j{i}; j < nums.size(); ++j){
                prod *= nums[j];
                if(prod < k){
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};