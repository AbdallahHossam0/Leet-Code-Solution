class Solution {
public:
    void swap(int& x, int& y){
        int temp{x};
        x = y;
        y = temp;
    }

    void get(vector<int>& v, int start){
        if(start == v.size() - 1){
            ans.push_back(v);
            return;
        }
        for(int i{start}; i < v.size(); ++i){
            swap(v[start], v[i]);
            get(v, start + 1);
            swap(v[start], v[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        get(nums, 0);
        return ans;
    }
    private:
        vector<vector<int>> ans;
};