Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2677
Total Time Taken: 
0.01
Correct Submission Count: 
3
Attempts No.: 
9

long long power(int n,int r)
    {
       
       if(r == 0) return 1;
       
       long long x = power(n,r/2);
       
       if(r%2 == 1){
           return ((((x%mod)*(x%mod))%mod)*n)%mod;
       }
       return ((x%mod)*(x%mod))%mod;
}
