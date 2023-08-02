class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int max{candies[0]};
        auto s{candies.size()};
        for(size_t i{1}; i < s; ++i){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        for(size_t i{}; i < candies.size(); ++i){
            ans[i] = (candies[i] + extraCandies < max) ? false : true;
        }
        return ans;
    }
};