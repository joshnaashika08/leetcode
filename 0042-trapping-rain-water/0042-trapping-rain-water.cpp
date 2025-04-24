class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int n=height.size();
        int r=n-1;
        int res=0;
        int lm=0,rm=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]>lm)
                lm=height[l];
                else
                res+=lm-height[l];
                l++;
            }
            else{
                if(height[r]>rm)
                rm=height[r];
                else
                res+=rm-height[r];
                r--;

            
            
            }
        }
        return res;
    }
};