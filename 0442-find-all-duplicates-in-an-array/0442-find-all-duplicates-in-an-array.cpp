class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> res;
       unordered_map<int,int>m;
       for(auto i:nums){
        m[i]++;
        if(m[i]>1)
        res.push_back(i);
       } 
       return res;
       
    }
};