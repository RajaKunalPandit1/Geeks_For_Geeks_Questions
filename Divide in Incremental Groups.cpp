Output Status : 

Problem Solved Successfully
Test Cases Passed: 
565 /565
Total Points Scored: 
8 /8
Your Total Score: 
2113
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    int dp[102][102][102];
    int solve(int i,int j,int k)
    {
        if(j==0 and k==0) return 1;
        if(j==0 and k!=0 or j!=0 and k==0) return 0;
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        int ans=0;
        for(int l=i;l<=j;l++)
        {
            ans+=solve(l,j-l,k-1);
        }
        return dp[i][j][k]=ans;
    }
    int countWaystoDivide(int n, int k) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(1,n,k);
    }
