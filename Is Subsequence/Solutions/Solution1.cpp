class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        size_t sSize{s.size()};
        size_t tSize{t.size()};

        int j{};

        bool flag{false};
        for(int i{}; i < sSize; i++){
            for(j; j < tSize; ++j){
                if(s[i] == t[j]){
                    flag = true;
                    ++j;
                    break;
                }
            }
            if(!flag){
                return false;
            }
            flag = false;
        }
        return true;

    }
};