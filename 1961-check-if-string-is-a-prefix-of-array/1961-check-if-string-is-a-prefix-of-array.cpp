class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string concat;
        for(const string& word:words){
            concat+=word;
            if(concat==s)
            return true;
            if(concat.size()>s.size())
            return false;
    }
        return false;
    }
};