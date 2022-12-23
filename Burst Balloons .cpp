Output Status : 

Problem Solved Successfully
Test Cases Passed: 
130 /130
Total Points Scored: 
8 /8
Your Total Score: 
1755
Total Time Taken: 
0.15
Your Accuracy: 
50%
Attempts No.: 
2
  
class Solution {
  
  private:
    int travel(int i, int j, vector<int> &arr, vector<vector<int>> &dp){
        if(i > j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        dp[i][j] = INT_MIN;
        for(int k = i; k <= j; k++){
            dp[i][j] = max(dp[i][j], arr[i - 1]*arr[k]*arr[j + 1] + travel(i, k - 1, arr, dp) + travel(k + 1, j, arr, dp));
        }
        return dp[i][j];
    }
    
public:
    int maxCoins(int N, vector<int> &arr) {
        arr.push_back(1);
        arr.insert(arr.begin(), 1);
        vector<vector<int>> dp (N + 1, vector<int> (N + 1, -1));
        return travel(1, N, arr, dp);
    }
};
