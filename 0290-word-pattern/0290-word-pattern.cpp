class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }

        if (words.size() != pattern.size()) return false;

        unordered_map<char, string> mp;
        unordered_set<string> used;

        for (int i = 0; i < pattern.size(); ++i) {
            char ch = pattern[i];

            if (mp.count(ch)) {
                if (mp[ch] != words[i]) return false;
            } else {
                if (used.count(words[i])) return false;
                mp[ch] = words[i];
                used.insert(words[i]);
            }
        }

        return true;
    }
};