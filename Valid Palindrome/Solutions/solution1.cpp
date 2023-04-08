class Solution {
public:
    bool isPalindrome(string s) {
        
        size_t vecSize{s.size()};
        int i{}, j{};

        for(; i < vecSize; ++i){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                s[j] = s[i];
                j++;
            }
        }
        

        
        i = 0;
        j = j - 1;

        for(; i <= j; ++i, --j){
            if((s[i] & 0b11011111) != (s[j] & 0b11011111)){
                return false;
            }
        }
        return true;

    }
};