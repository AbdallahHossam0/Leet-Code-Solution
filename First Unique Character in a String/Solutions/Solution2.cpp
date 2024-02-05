class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.size(); ++i){
            bool isDuplicate = false;
            for(int j = 0; j < s.size(); ++j){
                if(i != j && s[i] == s[j]){
                    isDuplicate = true;
                    break;
                }
            }
            if(!isDuplicate){
                return i;
            }
        }
        return -1;
    }
};