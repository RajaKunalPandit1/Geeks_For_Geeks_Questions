Output Status : 

Problem Solved Successfully
Test Cases Passed: 
105 /105
Total Points Scored: 
4 /4
Your Total Score: 
2671
Total Time Taken: 
0.05
Your Accuracy: 
50%
Attempts No.: 
2

// Naive Sol Using recursion :: Time : O(2^N) :: Aux_space : O(1)

// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        
        if(x == 0 || y == 0){
            return 0;
        }
        
        if(s1[x-1] == s2[y-1]){
            return 1 + lcs(x-1,y-1,s1,s2);
        }
        return max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
    }
};

// DP Memoization method :: Time : O(M*N) :: Aux_Space : O(M*N)

// function to find longest common subsequence

class Solution
{
    public:
    
    int dp_rec(string s1, string s2, int x, int y, vector<vector<int>> &dp){
        
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        
        if(x == 0 || y == 0){
            dp[x][y] = 0;
        }else{
            
            if(s1[x-1] == s2[y-1]){
                dp[x][y] = 1 + dp_rec(s1,s2,x-1,y-1,dp);
            }else{
                dp[x][y] = max(dp_rec(s1,s2,x-1,y,dp),dp_rec(s1,s2,x,y-1,dp));
            }
        }
        return dp[x][y];
    }
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        
        vector<vector<int>> dp(x+1,vector<int>(y+1,-1));
        
        int res = dp_rec(s1,s2,x,y,dp);
        
        return res;
          
           
        if(x == 0 || y == 0){
            return 0;
        }
        
        if(s1[x-1] == s2[y-1]){
            return 1 + lcs(x-1,y-1,s1,s2);
        }
        return max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
    }
};

// DP Tabulation method :: Time : O(M*N) :: Aux_Space : O(M*N)

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,0));

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){

                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};
