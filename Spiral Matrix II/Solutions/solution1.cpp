class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> inner(n);
        vector<vector<int>> outer(n, inner);

        int counter {n * n};

        int col_bgn{};
        int row_bgn{};

        int col_end{n - 1};
        int row_end{n - 1};


        for(int i{0}; i < counter; ){
            
            for(int j{col_bgn}; j <= col_end && i < counter; ++j){
                outer[row_bgn][j] = ++i;
            }
            ++row_bgn;

            for(int j{row_bgn}; j <= row_end && i < counter; ++j){
                outer[j][col_end] = ++i;
            }
            --col_end;

            for(int j{col_end}; j >= col_bgn && i < counter; --j){
                outer[row_end][j] = ++i;

            }
            --row_end;

            for(int j {row_end}; j >= row_bgn && i < counter; --j){
                outer[j][col_bgn] = ++i;
            }
            ++col_bgn;

        }

        return outer;
    }
};