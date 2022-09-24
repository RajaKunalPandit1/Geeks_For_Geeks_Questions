Output Status:

Problem Solved Successfully
Test Cases Passed: 
1 /1
Total Points Scored: 
2 /2
Your Total Score: 
1402
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int swapBitGame(long long N){
        
        long xo = 0;
        long o = 0;
        
        while(N!=0){
            
            if(N%2 != 0 && o>0){
                xo ^= o;
            }
            if(N%2 == 0){o++;}
            N = N/2;
        }
        
        if(xo!=0){return 1;}
        else{return 2;}
    }
};
