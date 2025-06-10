class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int res=0;
        unordered_map<int,int>m;
        for(auto i:nums)
        if(i%2==0)
        m[i]++;


        int max=0;
        int result=-1;
        for(auto i:m){
            int num=i.first;
            int count=i.second;
            if(count>max||count==max&&num<result){
                max=count;
                result=num;
            }
        }
        return result;
    }
};