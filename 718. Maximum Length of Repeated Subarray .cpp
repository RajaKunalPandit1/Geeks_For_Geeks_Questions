Output Status : 

Problem Solved Successfully
Test Cases Passed: 
300 /300
Total Points Scored: 
2 /2
Your Total Score: 
1388
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
        if(size(A) < size(B)) A.swap(B); 
		
        int m = size(A), n = size(B), ans = 0, dp[2][n+1]; 
		
        memset(dp, 0, sizeof dp);
		
        for(int i = 1, cur = 1, prev{}; i <= m; i++, cur ^= 1, prev ^= 1) 
			for(int j = 1; j <= n; j++) 
				dp[cur][j] = A[i-1] == B[j-1] ? dp[prev][j-1] + 1 : 0,
				ans = max(ans, dp[cur][j]);

		return ans;
    }
};
