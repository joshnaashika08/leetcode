class Solution {
    public int averageValue(int[] nums) {
        int average=0;
        int count=0;
        int m=nums.length;
        for(int num:nums){
            if (num%2==0&&num%3==0){
                average+=num;
                count++;

            }

           
        }
        return (count==0)?0:(average/count);
    }
}