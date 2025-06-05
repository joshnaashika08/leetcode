class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
     int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            bool leftGood = true;
            bool rightGood = true;
            if (i - k >= 0) {
                if (nums[i] <= nums[i - k]) {
                    leftGood = false;
                }
            }
            if (i + k < n) {
                if (nums[i] <= nums[i + k]) {
                    rightGood = false;
                }
            }
            if (leftGood && rightGood) {
                sum += nums[i];
            }
        }
        return sum;
   
    }
};