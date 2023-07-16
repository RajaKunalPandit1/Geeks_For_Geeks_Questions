Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
214 /214
Your Total Score: 
2693
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
2

class Solution
{
    public:
    
    int jos(int n, int k){
        
        if(n == 1) return 0;
        
        return (jos(n-1,k) + k)%n;
        
    }
    
    int josephus(int n, int k)
    {
        return jos(n,k) + 1;
    }
};
