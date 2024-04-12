class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum{};
        int count{};

        for(const auto& num:nums){
            if(num % 6 == 0){
                sum += num;
                count++;

            }
        }
        return (sum == 0) ? 0 : sum / count; 
    }
};