Output Status :

Problem Solved Successfully
Test Cases Passed: 
164 /164
Total Points Scored: 
8 /8
Your Total Score: 
1873
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

//Back-end complete function Template for C++

class Solution{
    public:
    bool isScramble(string s1, string s2){
        
        if(s1.length() != s2.length()){
            return false;
        }
        
        int n = s1.length();
        bool dp[n][n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j][0] = (s1[i] == s2[j]);
            }
        }
        
        for(int k = 2;k<=n;k++){
            for(int i=0;i<=n-k;i++){
                for(int j=0;j<=n-k;j++){
                    dp[i][j][k-1] = false;
                    for(int p = 1;p<k;p++){
                        if((dp[i][j][p-1] && dp[i+p][j+p][k-p-1]) || (dp[i][j+k-p][p-1] && dp[i+p][j][k-p-1])){
                            dp[i][j][k-1] = true;
                            break;
                        }
                    }
                }
            }
        }
        return dp[0][0][n-1];
    }    
};
