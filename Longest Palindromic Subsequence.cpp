Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2708
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    int lcs(string A, string t){
      int n=A.size();
      int m=t.size();
      
      vector<vector<int>> dp(n+1,vector<int>(m+1,0));
      
      for(int j=0; j<=m;j++){
          dp[0][j]=0;
      }
      
      for(int i=0;i<=n;i++){
          dp[i][0]=0;
      }
      
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              if(A[i-1] == t[j-1]){
                  dp[i][j]=1+ dp[i-1][j-1];
              }
              else{
                  dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
              }
          }
      }
      return dp[n][m];
    }
    
    int longestPalinSubseq(string A) {
        //code here
        string t= A;
        reverse(t.begin(), t.end());
        return(lcs(A,t));
    }
};
