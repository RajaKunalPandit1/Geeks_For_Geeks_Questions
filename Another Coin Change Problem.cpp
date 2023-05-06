Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2259
Total Time Taken: 
0.23
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
        int dp[101][1001];
    int rec(int i , int k , int target , vector<int>&a){
        if(i==a.size()){
            return k==0 and target==0;
        }
        if(dp[k][target]!=-1) return dp[k][target];
        int op1 = 0 , op2  =0;
        if(k>0 and target-a[i]>=0) op1 = rec(i ,k-1 , target-a[i],a);     // if we take this coin and will take more
        op2 = rec(i+1,k,target , a);     // if we do not take this coin 
        return dp[k][target] = (op1 | op2);
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        memset(dp , -1 , sizeof(dp));
        return rec(0,K,target,coins);
    }
};
