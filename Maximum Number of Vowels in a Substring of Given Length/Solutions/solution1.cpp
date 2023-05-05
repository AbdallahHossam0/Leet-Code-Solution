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
            max += isVowel(s[i]);
        }

        temp = max;

        for(size_t i{0}; i < s.size() - k; ++i){
            temp -= isVowel(s[i]);

            temp += isVowel(s[i + k]);

            if(max < temp){
                max = temp;
            }
        }
        return max;
    }
};