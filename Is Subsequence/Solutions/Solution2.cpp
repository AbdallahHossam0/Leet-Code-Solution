class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        size_t sSize{s.size()};
        size_t tSize{t.size()};
        int i{};
        int j{};
        while(i < sSize && j < tSize){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }

        return (i == sSize);

    }
};