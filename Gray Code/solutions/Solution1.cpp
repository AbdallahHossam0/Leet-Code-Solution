class Solution {
public:
    vector<int> grayCode(int n)
{
    vector<int> x {0, 1};
    int group = 1;

    int vecSize{};

    for(int i{1}; i < n; ++i){
        group *= 2;
        vecSize = x.size();
        for(int j{vecSize - 1}; j >= 0; --j){
            x.push_back(x[j] + group);
        }

    }
    return x;


}
};