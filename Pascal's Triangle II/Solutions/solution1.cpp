class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> outer;


        for(int i{}; i < rowIndex + 1; i++){
            vector<int> inner;
            for(int j{}; j <= i; j++){
                if(!j){
                    inner.push_back(1);
                }
                else if(j == i){
                    inner.push_back(1);
                }
                else{
                    inner.push_back(outer[i - 1][j - 1] + outer[i - 1][j]);
                }

            }
            outer.push_back(inner);
        }

        return outer.back();

    }
};