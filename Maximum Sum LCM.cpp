Output Status : 

Problem Solved Successfully
Test Cases Passed: 
204 /204
Total Points Scored: 
2 /2
Your Total Score: 
1629
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        
        long sum =0 ;
        
        for(int i=1;i*i<=n;i++){
            
            if(n%i == 0){
                sum += i;
                
                if(n/i != i){
                    sum += (n/i);
                }
            }
        }
        return sum;
    }
};
