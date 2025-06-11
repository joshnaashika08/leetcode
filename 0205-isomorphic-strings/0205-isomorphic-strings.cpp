class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char>sndt;
        unordered_map<char,char>tnds;
        for(int i=0;i<s.size();i++){
            char s1=s[i];
            char t1=t[i];
            if(sndt.count(s1)){
                if(sndt[s1]!=t1) return false;
            }
                else sndt[s1]=t1;            

            if(tnds.count(t1)){
                if(tnds[t1]!=s1) return false;
            }
                else tnds[t1]=s1;
            

        }
        return true;
    }
};