Ouput Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2850
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int N)
    {
        
        long long n = N;
        int mod=1e9+7;
        vector<long long>dp(n+1,0);
        dp[0]=1,dp[1]=1,dp[2]=2;
        for(int i=3;i<=n;i++) dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%mod;
        return dp[n]%mod;
        
    }
};
