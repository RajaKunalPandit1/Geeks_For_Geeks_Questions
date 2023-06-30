Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2647
Total Time Taken: 
0.01
Correct Submission Count: 
12
Attempts No.: 
15


    int setBits(int n) {
        
        int res = 0;
        
        while(n){
            res++;
            n = n & (n-1);
        }
        return res;
    }
