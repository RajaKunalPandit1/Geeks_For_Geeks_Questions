Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2446
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    int cutRod(int price[], int n) {
        vector<int>dp(n+1,-1);
        return solve(price,n,dp);
    }
    
    int solve(int price[],int n,vector<int>&dp){
        if(n==0){
            return 0;
        }
        if(dp[n]!= -1){
            return dp[n];
        }
        int ans = INT_MIN;
        for(int i=0;i<n;++i){
            int ele = price[i] + solve(price,n-i-1,dp);
            ans = max(ele,ans);
        }
        return dp[n] = ans;
    }
};
