class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int op1{};
        int op2{};
        stack<int> operands;

        for(const string& token : tokens){
            if(isNumber(token)){
                operands.push(stoi(token));
            }
            else{
                op2 = operands.top();
                operands.pop();
                op1 = operands.top();
                operands.pop();
                switch(token[0]){
                    case '+':
                        operands.push(op1 + op2);
                        break;
                    case '-':
                        operands.push(op1 - op2);
                        break;
                    case '*':
                        operands.push(op1 * op2);
                        break;
                    case '/':
                        operands.push(op1 / op2);
                        break;
                    default:
                        break;
                }
            }
        }
        return operands.top();
    }
private:
    bool isNumber(const std::string& str) {
        try {
            stoi(str);
            return true;
        } catch (...) {
            return false;
        }
    }
};