Output Status : 

Problem Solved Successfully
Test Cases Passed: 
160 /160
Total Points Scored: 
4 /4
Your Total Score: 
1939
Total Time Taken: 
0.1
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
       
       vector<vector<int>> dp(N,vector<int>(3,0));
        for(int i=0;i<3;i++){
            dp[0][i]=colors[0][i];
        }
        for(int i=1;i<N;i++){
            dp[i][0]=colors[i][0]+min(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=colors[i][1]+min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=colors[i][2]+min(dp[i-1][0],dp[i-1][1]);
        }
        return *min_element(dp[N-1].begin(),dp[N-1].end());
    }
};
