class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
        long long count=0;
        unordered_map<double,int>m;
        int n=r.size();
        for(int i=0;i<n;i++){
            double ratio=(double)r[i][0]/r[i][1];
            m[ratio]++;
        }
        for(auto i:m){
            long long temp=i.second;
            count+=temp*(temp-1)/2;
        }
        return count;
        
    }
};