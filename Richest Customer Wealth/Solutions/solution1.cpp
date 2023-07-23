class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int resMax{};
        int sum;
        for(auto& account : accounts){
            sum = accumulate(cbegin(account), cend(account), 0);
            resMax = max(resMax, sum);
        }
        return resMax;
    }
};

// best for memory