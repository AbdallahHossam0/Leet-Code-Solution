class Solution {
private:
    void swap(char& x, char&y){
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
public:
    void reverseString(vector<char>& s) {
        size_t size{s.size()};
        for(int i {}; i < size / 2; i++){
            swap(s[i], s[size - i - 1]);
        }
    }
};