class Solution {
public:
    double myPow(double x, int n) {
        
        double y {x};
        long long m{n}; 
        bool flag{false};
        if(!x){
            return 0;
        }
        if(x == 1){
            return 1;
        }
        else if(x == -1){
            return (n % 2) ? -1 : 1;
        }
        if(!n){
            return 1;
        }


        if(n < 0){
            m = -m;
            flag = true;
        }
        int i{};
        for(; i < m - 2; ++i){
            
            y *= x * x;
            ++i;
        }

        if(i < m -1){
            y *= x;
        }

        return flag ? 1 / y : y;
    }
};