Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
2 /2
Your Total Score: 
1875
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{

  public:
    int solve(int a, int b) {
        
        if(a==b)
        return 0;
        
        if(a==0 || b==0)
        return 1;
        
        int x = a&b;
        if(a==x || b==x)
        return 1;
        
        return 2;
        
    }
};
