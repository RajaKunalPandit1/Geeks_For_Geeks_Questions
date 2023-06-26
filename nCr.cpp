Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2595
Total Time Taken: 
0.01
Your Accuracy: 
50%
Attempts No.: 
2


    int nCr(int n, int r){
        
       if(n<r) return 0;
        if((n-r)<r) r= n-r;  
        int MOD = 1000000007;
        
        int dp[r+1]; //1 available in every col 
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;  //starting from 1
        for(int i=1; i<=n; i++){
            for(int j= min(r,i); j>0; j--){
                dp[j] = (dp[j] + dp[j-1])%MOD;
            }
        }
        return dp[r];
    }
