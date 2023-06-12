Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
369 /369
Your Total Score: 
2453
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
6

    int isPrime(int n){
        
        if(n == 1){
            return false;
        }
        
        if(n == 2 || n == 3){
            return true;
        }
        if(n%2 == 0 || n%3 == 0){
            return false;
        }
        
        for(int i=5;i*i<=n;i+=6){
            
            if(n%i == 0 || n%(i+2) == 0){
                return false;
            }
        }
        return true;
    }
