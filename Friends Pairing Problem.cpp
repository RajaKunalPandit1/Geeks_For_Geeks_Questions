Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10210 /10210
Total Points Scored: 
2 /2
Your Total Score: 
1293
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
{
public:
    int mod = 1e9+7;
    
    long long int func(int n, vector<long long int> &dp){
        
        if(n<=2) return n;
        
        if(dp[n] != -1) return dp[n];
        
        int single = func(n-1,dp);
        
        int pairedup = ((n-1)%mod*func(n-2,dp)%mod)%mod;
        return dp[n] = ((single)%mod + (pairedup)%mod)%mod;
        
    }
    

    int countFriendsPairings(int n) 
    { 
        vector<long long int> dp(n+1,-1);
        return func(n,dp);
    }
}; 
