Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2301
Total Time Taken: 
0.3
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long countBits(long long N) {
        long long cnt = 0;
        
        for(long long i=1;i<=N;i++){
            cnt += __builtin_popcount(i);
        }
        return cnt;
    }
};
