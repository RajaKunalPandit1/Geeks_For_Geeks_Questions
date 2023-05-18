Output Status :

Problem Solved Successfully
Test Cases Passed: 
122 /122
Total Points Scored: 
8 /8
Your Total Score: 
2315
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
    public:
    
    void dfs(vector<vector<int>> &matrix, vector<vector<bool>> &visited, int x, int y, int n, int m){
        
        if(x<0 || y <0 || x>=n || y>= m || visited[x][y] == true || matrix[x][y] == 0){
            return;
        }
        
        visited[x][y] = true;
        
        dfs(matrix,visited,x+1,y,n,m);
        dfs(matrix,visited,x,y+1,n,m);
        dfs(matrix,visited,x-1,y,n,m);
        dfs(matrix,visited,x,y-1,n,m);
        
    }
    
    int closedIslands(vector<vector<int>>& matrix, int n, int m) {
        
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i*j == 0 || i == n-1 || j == m-1) && matrix[i][j] == 1 && visited[i][j] == false){
                    dfs(matrix,visited,i,j,n,m);
                }
            }
        }
        
        int noislands = 0;
        
        for(int i=0;i<n;i++){
            for(int j =0 ;j<m;j++){
                if(matrix[i][j] == 1 && visited[i][j] == false){
                    noislands++;
                    dfs(matrix,visited,i,j,n,m);
                }
            }
        }
        return noislands;
    }
};
