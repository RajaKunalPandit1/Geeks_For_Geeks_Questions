Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
2 /2
Your Total Score: 
1729
Total Time Taken: 
0.01
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{   
public:
    int waysToBreakNumber(int n){
    
        long long int mod = 1000000007;
        long long int a = n;
        
        return (3*a+((a-1)*(a-2))/2)%mod;
    
    }
};
