Output Status : 

Problem Solved Successfully
Test Cases Passed: 
306 /306
Total Points Scored: 
4 /4
Your Total Score: 
1287
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

public:
    
    vector<vector<int>> dp;
    
    int helper(vector<int> &A, int i, int j){
        
        if(i == j) return A[i];
        
        if(i+1 == j){
            return max(A[i],A[j]);
        }
        
        if(dp[i][j] == 0){
            
            int start = A[i] + min(helper(A,i+2,j),helper(A,i+1,j-1));
            int end = A[j] + min(helper(A,i+1,j-1),helper(A,i,j-2));
            
            dp[i][j] = max(start,end);
        }
        return dp[i][j];
    }
    
    

    int maxCoins(vector<int>&A,int n)
    {
	    dp = vector<vector<int>> (n+1,vector<int> (n+1,0));
	    return helper(A,0,n-1);
	    
    }
    
 };
