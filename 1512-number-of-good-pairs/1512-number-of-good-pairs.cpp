class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ++m[nums[i]];
        }
        for(auto i:m){
            int temp=i.second;
            count+=temp*(temp-1)/2;
        }
        return count;
    }
};