class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for (int i = 1; i < 9; ++i) {
            int num = i;
            for (int nextDigit = i + 1; num <= high && nextDigit <= 9; ++nextDigit) {
                num = num * 10 + nextDigit;
                cout << num << "  ";
                if (low <= num && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};