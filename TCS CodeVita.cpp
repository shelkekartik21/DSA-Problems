#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<char> >& arr, int row, int col, int n){
    if(row < 0 || row > n-1 || col < 0 || col > n-1 || arr[row][col] == 'N'){
        return 0;
    }
    
    arr[row][col] = 'N';
	
    int down = dfs(arr, row+1, col, n);
    int up = dfs(arr, row-1, col, n);
    int right = dfs(arr, row, col+1, n);
    int left = dfs(arr, row, col-1, n);
    
    return 1 + left + right + up + down;
}

void fun(vector<vector<char> >& arr, int n){
    int p1 = 0, p2 = 0;
    bool flag = true;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 'C'){
                if(flag){
                    p1 += dfs(arr, i, j, n);   
                }else{
                    p2 += dfs(arr, i, j, n);
                }
                flag = !flag;
            }
        }
    }
    cout<<p1<<" "<<p2;
}

int main() {
    int n;
    cin>>n;
    
    vector<vector<char> > arr(n, vector<char> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    fun(arr, n);

    return 0;
}
