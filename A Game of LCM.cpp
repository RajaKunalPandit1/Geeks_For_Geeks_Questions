Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1065 /1065
Total Points Scored: 
4 /4
Your Total Score: 
1733
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long maxGcd(int N) {
        
        long long int res = N*(N-1);
        int c = 0;
        
        for(long long int i = N-2;i>2&&c<2;i--){
            
            if(__gcd(res,i) == 1){
                res *= i;
                c++;
            }
        }
        return res;
    }
};
