Output Status : 

Problem Solved Successfully
Test Cases Passed: 
304 /304
Total Points Scored: 
2 /2
Your Total Score: 
1574
Total Time Taken: 
0.19
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:
    bool isPrime(int n){
        
        int t = sqrt(n);
        
        for(int i=2;i<=t;i++){
            
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    

    string isSumOfTwo(int N){
        
        int i=2;
        
        while(i<=N/2){
            if(isPrime(i)){
                if(isPrime(N-i)){
                    return "Yes";
                }
            }
            i++;
        }
        return "No";
    }
};
