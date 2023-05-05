class Solution {
private:
    bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
public:
    int maxVowels(string s, int k) {
        int temp{};
        int max{};
        for(size_t i{}; i < k; ++i){
            if(isVowel(s[i])){
                max++;
            }
        }

        temp = max;

        for(size_t i{0}; i < s.size() - k; ++i){
            if(isVowel(s[i])){
                --temp;
            }
            if(isVowel(s[i + k])){
                ++temp;
            }
            if(max < temp){
                max = temp;
            }
        }
        return max;
    }
};