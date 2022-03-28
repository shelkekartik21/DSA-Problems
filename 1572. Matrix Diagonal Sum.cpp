int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int sum = 0, j = 0;
        
        for(int i=0; i<m; i++){
            sum += mat[i][j];
            j++;
        }
        
        j = n-1;
        for(int i=0; i<m; i++){
            sum += mat[i][j];
            j--;
        }
        
        return (m%2 != 0) ? sum - mat[m/2][n/2] : sum;
    }