class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        size_t n{matrix[0].size()};

        vector<int> inner(n);

        vector<vector<int>> outer(n, inner);

        for(int i{}; i < n; ++i){
            for(int j{}; j < n; ++j){
                outer[i][j] = matrix[n - j - 1][i];
            }
        }
        matrix = move(outer);
    }
};