class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        for(auto s:strs){
            string key=s;
            sort(key.begin(),key.end());
            m[key].push_back(s);

        }
        vector<vector<string>>res;
        for(auto i:m)
        res.push_back(i.second);
        return res;
    }
};