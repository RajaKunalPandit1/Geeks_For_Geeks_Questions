Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2731
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int dx[4]={1,0,-1,0};
  int dy[4]={0,1,0,-1};
    int shortestDistance(int n, int m, vector<vector<int>> a, int x, int y) {
      queue<vector<int>>q;
      q.push({0,0,0});
      
      if(a[0][0]==0)return -1;
      while(!q.empty())
      {
          auto it=q.front();
          q.pop();
          int dis=it[0];
          int x1=it[1];
          int y1=it[2];
          if(x1==x && y1==y)return dis;
          for(int i=0;i<4;i++)
          {
              int nx=x1+dx[i];
              int ny=dy[i]+y1;
              if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]==1)
              {
                  q.push({dis+1,nx,ny});
                  a[nx][ny]=0;
              }
          }
      }
      return -1;
    }
