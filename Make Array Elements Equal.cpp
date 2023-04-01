Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2125
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long int minOperations(int N) {
        if(N==1)    return 1;
        long long int mid=N/2;
        return N%2==0?mid*mid:mid*(mid+1);
    }
};
