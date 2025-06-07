class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>symbol={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int result=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int current = symbol[s[i]];
            int next= i+1<n ? symbol[s[i+1]] :0;
            
            if(current<next)
            result-=current;

            else
            result+=current;
        }
        return result;
    }
};