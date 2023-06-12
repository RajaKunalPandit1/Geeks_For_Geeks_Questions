Output Status : 

Problem Solved Successfully
Test Cases Passed: 
2200 /2200
Total Points Scored: 
2 /2
Your Total Score: 
2452
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

    int trailingZeroes(int n)
    {
        int res = 0;
        
        for(int i=5;i<=n;i*= 5){
            res += n/i;
        }
        return res;
    }
