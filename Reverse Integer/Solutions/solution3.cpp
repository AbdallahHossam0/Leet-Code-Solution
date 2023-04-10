class Solution {
public:
    int reverse(int x) {
        long long y{};
        bool z {x < 0 ? true : false};
        while(x){
            y = y * 10 + x % 10;
            x /= 10;
        }
        if(y > numeric_limits<int>::max()|| y < numeric_limits<int>::min()) return 0;
        return y;
    }
};