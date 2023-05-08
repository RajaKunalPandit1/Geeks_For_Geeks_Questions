Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2263
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
        int modulo(string s,int m)
        {
            int k=0;
            for(char c:s)k=(k*2 +(c-'0'))%m;
            return k;
        }
 };
