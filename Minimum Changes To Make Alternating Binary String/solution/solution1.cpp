class Solution {
public:
    int minOperations(string s) {
        int ans1{};
        int ans2{};

        bool x = true;

        for(int i{}; i < s.size(); ++i){
            if(x == true && s[i] == '1'){
                x = false;
            }
            else if(x == false && s[i] == '0'){
                x = true;
            }
            else if(x == true && s[i] == '0'){
                ans1++;
                x = false;
            }
            else{
                ans1++;
                x = true;
            }
        }
        
        x = false;

        for(int i{}; i < s.size(); ++i){
            if(x == true && s[i] == '1'){
                x = false;
            }
            else if(x == false && s[i] == '0'){
                x = true;
            }
            else if(x == true && s[i] == '0'){
                ans2++;
                x = false;
            }
            else{
                ans2++;
                x = true;
            }
        }
        return min(ans1, ans2);
    }
};