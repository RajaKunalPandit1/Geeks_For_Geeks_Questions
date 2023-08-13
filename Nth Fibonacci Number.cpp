Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2764
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

    int nthFibonacci(int n){
        
        int f[n];
        f[0] = 1;
        f[1] = 1;
        
        for(int i=2;i<n;i++){
            f[i] = (f[i-1] + f[i-2])%1000000007;
        }
        
        return f[n-1]%1000000007;
    }
