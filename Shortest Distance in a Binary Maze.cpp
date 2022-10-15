Output Status : 

Problem Solved Successfully
Test Cases Passed: 
124 /124
Total Points Scored: 
4 /4
Your Total Score: 
1474
Total Time Taken: 
0.09
Your Accuracy: 
50%
Attempts No.: 
2


class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here 
        queue<pair<int,int>> q ;
        
        q.push({source.first,source.second}) ;
        
        int dis = 0;
        
        vector<vector<int>> vis(grid.size(), vector<int> (grid[0].size(),0)) ;
        
        vis[source.first][source.second] = 1 ;
        while(!q.empty())
        {
            int sz = q.size() ;
            
            for(int i = 0; i< sz ; i++)
            {
            int x = q.front().first ;
            int y = q.front().second ;
            
            q.pop() ;
            
            if( x == destination.first && y == destination.second ) 
            return dis ;
            
            if( x-1 >= 0 && grid[x-1][y] == 1 && vis[x-1][y] == 0)
            {
                q.push({x-1,y}) ;
                vis[x-1][y] = 1 ;
            }
            if( x+1 < grid.size() && grid[x+1][y] == 1 && vis[x+1][y] == 0) 
            {
                q.push({x+1,y}) ;
                vis[x+1][y] = 1 ;
            }
            if( y-1 >= 0 && grid[x][y-1] == 1  && vis[x][y-1] == 0)
            {
                q.push({x,y-1}) ;
                vis[x][y-1] = 1 ;
            }
            if( y+1 < grid[0].size() && grid[x][y+1] == 1 && vis[x][y+1] == 0 )
            {
                q.push({x,y+1});
                vis[x][y+1] = 1 ;
            }
            
            
            }
            dis++;
        }
        return -1 ;
    }
};
