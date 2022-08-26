Output Status :

Problem Solved Successfully
Test Cases Passed: 
105 /105
Total Points Scored: 
4 /4
Your Total Score: 
1310
Total Time Taken: 
0.35
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:
    /*You are required to complete below method */
    
    int mod = 1e9+7;
    
    long long solve(string &str, int i, int j, vector<vector<long long>> &dp){
        
        if(i>j) return 0;
        if(i == j) return 1;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(str[i] == str[j]){
            return dp[i][j] = (1+solve(str,i+1,j,dp) + solve(str,i,j-1,dp))%mod;
        }else{
            return dp[i][j] = (mod+solve(str,i+1,j,dp) + solve(str,i,j-1,dp) - solve(str,i+1,j-1,dp))%mod;
        }    
    }
    
    long long int  countPS(string str)
    {
       vector<vector<long long >> dp(1001,vector<long long>(1001,-1));
       
       return solve(str,0,str.size()-1,dp);
    }
  
};
