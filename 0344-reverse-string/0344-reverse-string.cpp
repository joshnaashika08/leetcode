class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>temp=s;
    for(int i=0;i<temp.size();i++){
        s[i]=temp[temp.size()-1-i];
    }
 
    }
};