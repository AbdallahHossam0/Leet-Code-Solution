class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl{"http://tinyurl.com/"};
        shortUrl += c;
        mp[shortUrl] = longUrl;
        c++;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }

private:
    map<string, string> mp;
    char c{'a'};
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));