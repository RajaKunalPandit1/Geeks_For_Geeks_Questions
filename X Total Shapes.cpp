Output Status : 

Problem Solved Successfully
Test Cases Passed: 
204 /204
Total Points Scored: 
4 /4
Your Total Score: 
1265
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1

// Time : O(N*M) :: Aux_Space : O(1) :: Question Similiar to Number of Islands

class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    void dfs(vector<vector<char>> &grid, int i, int j, int row, int col){
        
        if(i<0 || j<0 || i>=row || j>=col || grid[i][j] != 'X') return;
        
        grid[i][j] = 'O';
        
        dfs(grid,i+1,j,row,col);
        dfs(grid,i,j+1,row,col);
        dfs(grid,i-1,j,row,col);
        dfs(grid,i,j-1,row,col);
    }
    
    
    int xShape(vector<vector<char>>& grid) 
    {
       
       int row = grid.size();
       int col = grid[0].size();
       
       int count = 0;
       
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               
               if(grid[i][j] == 'X'){
                   dfs(grid,i,j,row,col);
                   count++;
               }
           }
       }
       return count;
    }
