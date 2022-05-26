//APPROACH 1
//TIME COMPLEXITY = O(M * N) 
//Extra space is required for storing 0's positions 

void setZeroes(vector<vector<int>>& matrix){
    int m = matrix.size(), n = matrix[0].size();
    vector<pair<int,int>> pos;
        
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 0){
                pos.push_back({i,j});
            }
        }
    }
        
    for(auto it : pos){
        for(int k = 0; k < n; k++){
            matrix[it.first][k] = 0;
        }
            
        for(int k = 0; k < m; k++){
            matrix[k][it.second] = 0;
        }
    }
}

//APPROACH 2
//TIME COMPLEXITY = O(M*N)
//SPACE COMPLEXITY = O(1)

 void setZeroes(vector<vector<int>>& matrix) {
        bool RowZero = false;
        bool ColZero = false;
        for (int i = 0; i < matrix[0].size(); i++) //check the first row
        { 
            if (matrix[0][i] == 0) 
            {
                RowZero = true;
                break;
            } 
        }
        for (int i = 0; i < matrix.size(); i++) //check the first column
        { 
            if (matrix[i][0] == 0) 
            {
                ColZero = true;
                break;
            } 
        }
        for (int i = 1; i < matrix.size(); i++) //check except the first row and column
        { 
            for (int j = 1; j < matrix[0].size(); j++) 
            {    
                if (matrix[i][j] == 0) 
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }        
            }
        }
        for (int i = 1; i < matrix.size(); i++) //process except the first row and column 
        {
           for (int j = 1; j < matrix[0].size(); j++)
           {
               if (matrix[i][0] == 0 || matrix[0][j] == 0)
               {
                   matrix[i][j] = 0;
           
               }
           }
        }
        if(RowZero) //handle the first row
        { 
            for (int i = 0; i < matrix[0].size(); i++) 
            {
                matrix[0][i] = 0;
            }
        }
        if (ColZero) //handle the first column
        { 
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }