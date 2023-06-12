Output Status : 

Problem Solved Successfully
Test Cases Passed: 
290 /290
Total Points Scored: 
2 /2
Your Total Score: 
2450
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

    int facDigits(int n){
        
        if(n < 0) return 0;
        
        if(n <= 1) return 1;
        
        double digits = 0;
        
        for(int i=1;i<=n;i++){
            digits += log10(i);
        }
        return floor(digits) + 1;
    }
