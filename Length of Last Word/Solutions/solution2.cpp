class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter {0};
        for(unsigned long i {s.size() - 1}; i <= 4294967295; i--){
            if(s[i] == ' ' && counter == 0){
                continue;
            } 
            else if(s[i] == ' '){
                return counter;
            }
            else[[likely]]{
                ++counter;
            }
        }
        return counter;
    }
}