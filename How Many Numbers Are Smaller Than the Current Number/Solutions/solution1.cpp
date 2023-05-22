class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        size_t n {nums.size()};
        vector<int> v(n);
        int ans;
        for(int i{}; i < n; ++i){
            ans = 0;
            for(int j{}; j < n; ++j){
                if(nums[j] < nums[i]){
                    ++ans;
                }
            }
            v[i] = ans;
        }
        return v;
    }
};