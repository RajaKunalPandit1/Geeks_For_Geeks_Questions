Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2085
Total Time Taken: 
0.55
Your Accuracy: 
100%
Attempts No.: 
1


    int bfs(vector<vector<char>>& grid, queue<pair<int,int>>& Q)
    {
        
        int distance=0;
        vector<int> dir={-1, 0, 1, 0 ,-1};
        while(Q.size())
        {
            int size= Q.size();
            distance++;
            for(int i=0;i< size;i++)
            {
                int r= Q.front().first;
                int c= Q.front().second;
                Q.pop();
                for(int j=0;j<4;j++)
                {
                    int row= r+dir[j], col= c+ dir[j+1];
                    if(row<0 || col<0 || row== grid.size() || 
                    col== grid[0].size()||  grid[row][col] == 'X') continue;
                    if(grid[row][col]== 'Y') return distance;
                    
                    grid[row][col] = 'X';
                    Q.push({row, col}) ;
                }
                
            }
        }
        return distance;
    }
  
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        
        int ans= INT_MIN;
        queue<pair<int,int>> Q;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(grid[i][j]=='X')
                {
                    Q.push({i,j}) ;   
                }
            }
        }
      return  bfs(grid, Q);
      }
};
