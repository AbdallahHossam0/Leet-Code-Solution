class Solution {
public:
    bool isPalindrome(string s) {

        int i{};
        int j{static_cast<int>(s.size())};

        while(i < j){
            while(i < j && !isalpha(s[i]) && !isdigit(s[i])){
                i++;
            }
            while(i < j && !isalpha(s[j]) && !isdigit(s[j])){
                j--;
            }

            if((s[i] & 0xDF) != (s[j] & 0xDF)){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};