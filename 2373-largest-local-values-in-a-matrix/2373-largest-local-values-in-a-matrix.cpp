class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        
        vector<vector<int>>res(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){

                int maxval=INT_MIN;

                for(int x=i;x<=i+2;x++){
                    for(int y=j;y<=j+2;y++){
                         maxval=max(maxval,grid[x][y]);
                    }
                }
                res[i][j]=maxval;
            }
        }
        return res;
    }
};