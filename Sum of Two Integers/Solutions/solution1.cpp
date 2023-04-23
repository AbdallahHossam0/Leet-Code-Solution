class Solution {
public:
  int getSum(int a, int b) {
    int x;
    char c{};
    int sum{};
    int a1{}, b1{};
    for (int i{}; i < 32; i++) {
        a1 = (a >> i) & 0x00000001;
        b1 = (b >> i) & 0x00000001;

        x = a1 ^ b1 ^ c;
        c = a1 & b1 | b1 & c | c & a1;

        sum |= x << i;
    }
    return sum;
  }
};