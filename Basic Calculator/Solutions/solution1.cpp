class Solution {
public:
    int calculate(string s) {
        unsigned long long sum{};
        int sign{1};
        stack<short> ops;
        stack<unsigned long long> sums;


        for(int i{}; s[i] != 0; ++i){
            if(isdigit(s[i])){
                unsigned long long num{0};
                do{
                    num = num * 10 + s[i] - '0';
                    ++i;
                }
                while(s[i] != 0 && isdigit(s[i]));
                --i;
                sum += num * sign;
                sign = 1;

            }
            else if(s[i] == '('){
                ops.push(sign);
                sums.push(sum);
                sum = 0;
                sign = 1;

            }
            else if(s[i] == ')'){
                sum = sums.top() + sum * ops.top();
                sums.pop();
                ops.pop();
            }
            else if(s[i] == '-'){
                sign *= -1;
            }
        }
        return sum;
    }
};