class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int total=m*n;
        vector<int>flat;
        vector<vector<int>>result(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                flat.push_back(grid[i][j]);
            }
        }
        vector<int>shift(total);
        for(int i=0;i<total;i++)
        shift[(i+k)%total]=flat[i];
       
        int ind=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               result[i][j]=shift[ind++];
            }
        }
        return result;
    }
};