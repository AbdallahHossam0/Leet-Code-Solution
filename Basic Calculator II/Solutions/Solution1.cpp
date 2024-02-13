class Solution {
public:
    int calculate(string s) {
        int ans;
        deque<char> operators;
        deque<int> operands;
        bool flag[2] {false, false};

        for(int i = 0; s[i]; ++i){
            if(isdigit(s[i])){
                int x = s[i] - '0';
                i++;
                while(s[i] && isdigit(s[i])){
                    x *= 10;
                    x += s[i] - '0';
                    i++;
                }
                i--;
                if(flag[0] == true){
                    int y = operands.back();
                    operands.pop_back();
                    if(flag[1]){
                        cout << x << '*' << y << '=';
                        x *= y;
                        cout << x << endl;
                    }
                    else{
                        cout << x << '/' << y << '=';
                        x = y / x;
                        cout << x << endl;
                    }
                    flag[0] = false;
                }
                operands.push_back(x);
            }
            else if(s[i] == '*' || s[i] == '/'){
                flag[0] = true;
                if(s[i] == '*'){
                    flag[1] = true;
                }
                else{
                    flag[1] = false;
                }
            }
            else if(s[i] == '+' || s[i] == '-'){
                operators.push_back(s[i]);
            }
        }
        ans = operands.front();
        operands.pop_front();

        while(!operators.empty()){
            char op {operators.front()};
            int x {operands.front()};

            if(op == '+'){
                cout << ans << '+' << x << '=';
                ans += x;
                cout << ans << endl;
            }
            else{
                cout << ans << '-' << x << '=';
                ans = ans - x;
                cout << ans << endl;
            }
            operators.pop_front();
            operands.pop_front();
        }
        return ans;
    }
};