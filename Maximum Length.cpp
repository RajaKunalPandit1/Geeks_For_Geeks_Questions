Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2163
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:
    int solve(int a, int b, int c) {
        int mx=max(a, max(b, c));
        if(a+b+c-mx>=mx/2-1) return a+b+c;
        return -1;
    }
};
