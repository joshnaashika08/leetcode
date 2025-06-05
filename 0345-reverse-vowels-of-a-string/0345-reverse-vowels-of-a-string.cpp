class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        auto isvowel=[] (char c){
            c=tolower(c);
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        };
        while(left<right){
            while(left<right&&!isvowel(s[left])) left++;
            while(left<right&&!isvowel(s[right])) right--;
            if(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};