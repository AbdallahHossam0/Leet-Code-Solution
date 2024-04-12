class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() == 0 || num.size() == k) {
            return "0";
        }
        string ans{""};
        int start{};
        char min{'9'};
        int temp;

        for(; start + k < num.size();) {
            min = num[start];
            temp = 0;
            int i{start};
            for(; i <= start + k; ++i) {
                if(num[i] < min) {
                    min = num[i];
                    temp = i - start;
                }
            }

            k -= temp;
            start += temp + 1;

            if(min == '0' && ans.size() == 0) {
                continue;
            } else {
                ans.push_back(min);
            }
        }

        return ans.empty() ? "0" : ans;
    }
};