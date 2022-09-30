Output Status : 

Problem Solved Successfully
Test Cases Passed: 
2095 /2095
Total Points Scored: 
4 /4
Your Total Score: 
1418
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int safePos(int n, int k) {
        
        if(n == 1) return 1;
        
        int t = safePos(n-1,k);
        return (t+k-1)%n + 1;
        
    }
};
