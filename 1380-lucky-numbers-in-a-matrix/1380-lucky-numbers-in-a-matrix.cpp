class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>result;
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++){
             int min=matrix[i][0];
             int colind=0;
             for(int j=0;j<cols;j++){
                if(matrix[i][j]<min){
                    min=matrix[i][j];
                    colind=j;
                }
             }
             bool ismaxincol=true;
             for(int k=0;k<rows;k++){
                if(matrix[k][colind]>min){
                ismaxincol=false;
                break;
                }
             }
            if(ismaxincol) result.push_back(min);
        }
     return result;
    }
};