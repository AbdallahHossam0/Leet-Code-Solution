class Solution {
public:
    int findJudge(const int n, vector<vector<int>>& trust) {
    vector<int> test (n, 0);
    vector<int> trusted(n, 0);

    for(size_t i{}; i < trust.size(); ++i){
        test[trust[i][0] - 1] = 1;
        trusted[trust[i][1] - 1]++;
    }
    
    for(int i{}; i < n; ++i){
        if(test[i] == 0 && trusted[i] == n - 1){
            return i + 1;
        }
    }
    return -1;
    }
};