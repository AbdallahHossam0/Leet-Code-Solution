class Solution {
public:
    int evaluate(char op, int num1, int num2){
        switch(op){
            case '+': return num1 + num2;
            case '-': return num1 - num2;
            case '*': return num1 * num2;
            case '/': return num1 / num2;
        }
        return 0;
    }
    int calculate(string s) {
        int num1 = 0;
        int num2 = 0;
        int ans = 0;
        char op = '+';

        for(int i = 0; s[i]; ++i){
            if(isdigit(s[i])){
                num2 *= 10;
                num2 += s[i] - '0';
            }
            else if(s[i] != ' '){
                num1 = evaluate(op, num1, num2);
                if(s[i] == '+' || s[i] == '-'){
                    ans += num1;
                    num1 = 0;
                }
                op = s[i];
                num2 = 0;
            }
        }
        return ans + evaluate(op, num1, num2);
    }
};