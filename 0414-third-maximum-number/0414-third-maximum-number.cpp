class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        n = nums.size(); 
        if(n<3)
        return nums[n-1];
        else
        return nums[n-3];

        }
};