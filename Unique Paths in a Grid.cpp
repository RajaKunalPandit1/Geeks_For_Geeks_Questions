Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
1973
Total Time Taken: 
0.96
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    #define mod (int)(1e9+7)
    int f(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(i>=n || j>=m || grid[i][j]==0) return 0;
        
        if(i==n-1 && j==m-1) return 1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int down=f(i+1,j,n,m,grid,dp);
        
        int right=f(i,j+1,n,m,grid,dp);
        
        return dp[i][j]=(down+right)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return f(0,0,n,m,grid,dp);
    }
};
