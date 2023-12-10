class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        auto s1{matrix.size()};
        auto s2{matrix[0].size()};
        vector<vector<int>> ret(s2, vector<int>(s1, 0));
        for(size_t i = 0; i < s2; ++i){
            for(size_t j = 0; j < s1; ++j){
                ret[i][j] = matrix[j][i];
            }
        }
        return ret;
    }
};