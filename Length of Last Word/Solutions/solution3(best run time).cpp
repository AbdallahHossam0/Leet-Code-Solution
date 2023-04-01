class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter {0};
        for(unsigned long i {s.size() - 1}; i < 0xffffffff; i--){
            if(s[i] == ' ' && counter != 0){
                return counter;
            } 
            else if(s[i] == ' '){
                continue;
            }
            else{
                ++counter;
            }
        }
        return counter;
    }
};