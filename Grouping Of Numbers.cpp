Output Status : 

Problem Solved Successfully
Test Cases Passed: 
201 /201
Total Points Scored: 
4 /4
Your Total Score: 
1552
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    int maxGroupSize(int arr[], int n, int k) {
        
        vector<int> dp(k);
        
        for(int i=0;i<n;i++){
            dp[arr[i]%k]++;
        }
        
        int res = dp[0] > 0;
        
        for(int i=1;i<=k-i;i++){
            if(i == k-i){
                res += dp[k/2] > 0;
                break;
            }
            res += max(dp[i],dp[k-i]);
        }
        res = max(1,res);
        return res;
    }
};
