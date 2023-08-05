class Solution {
    bool v(char s){
        return s == 'a' || s == 'i' || s == 'e' || s == 'o' || s == 'u'
            || s == 'A' || s == 'I' || s == 'E' || s == 'O' || s == 'U';
    }
public:
    string reverseVowels(string s) {
        size_t start {};
        size_t end{s.size() - 1};

        while(start < end){
            while(start < end && !v(s[start])){
                start++;
            }
            while(start < end && !v(s[end])){
                end--;
            }
            if(start < end)
                swap(s[start++], s[end--]);
        }
        return s;
    }
};