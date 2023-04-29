class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min{numeric_limits<int>::max()};
        int distance{};
        for(int i{}; i < nums.size(); ++i){
            if(nums[i] == target){
                distance = (i - start > 0) ? i - start : start - i;
                if(min > distance){
                    min = distance;
                }
            }
        }

        return min;
    }
};