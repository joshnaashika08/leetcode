class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>res=matrix;
        int n=matrix.size();
        int m=matrix[0].size();
       vector<int>colmax(m,INT_MIN);
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           colmax[j]=max(colmax[j],matrix[i][j]);
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(res[i][j]==-1)
            res[i][j]=colmax[j];
        }
       }
     return res;
    }
};