class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>m;
        int max1=0;
        int min1=INT_MAX;
        for(char i:s){
            m[i]++;
            }
         for(auto i : m)  {
            if(i.second%2)
            max1=max(max1,i.second);
            else
            min1=min(min1,i.second);
         }
        return max1-min1;
    }
};