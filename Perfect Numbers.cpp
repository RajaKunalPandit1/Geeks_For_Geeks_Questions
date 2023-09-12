Output Status : 

Problem Solved Successfully
Test Cases Passed: 
110 /110
Total Points Scored: 
2 /2
Your Total Score: 
2838
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

int isPerfectNumber(long long N) {
        if(N==1)    return 0;
        long long count=1;
        long long factor1,factor2;
        for(long long i=2;i<=sqrt(N);i++){
            if(N%i==0){
                factor1=i;
                factor2=N/i;
                count=count+factor1+factor2;
            }
        }
        if(count==N)    return 1;
        return 0;
    }
