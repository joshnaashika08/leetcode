class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxsum=a[0],currsum=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            currsum+=a[i];
            if(currsum>maxsum)
            maxsum=currsum;
            if(currsum<0)
            currsum=0;
        }
        return maxsum;
    }
};