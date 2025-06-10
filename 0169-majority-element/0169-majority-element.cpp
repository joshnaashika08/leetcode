class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>m;
       int place=0;
       for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
       }
       int max=INT_MIN;
       for(auto i:m){
        if(i.second>max)
        max=i.second;
         place=i.first;
       }
       return place;
    }
};