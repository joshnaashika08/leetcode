class Solution {
public:
    char findTheDifference(string s, string t) {
        int result=0;
        for(char c:s) result^=c;
        for(char d:t) result^=d;
        return result;
    }
};