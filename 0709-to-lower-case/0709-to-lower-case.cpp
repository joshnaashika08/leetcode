class Solution {
public:
    string toLowerCase(string s) {
        string lower="";
        for(char c:s){
        lower+=tolower(c);
        
        }
        return lower;
    }
};