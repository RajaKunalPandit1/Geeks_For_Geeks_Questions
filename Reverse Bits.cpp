Output Status : 

Problem Solved Successfully
Test Cases Passed: 
750 /750
Total Points Scored: 
2 /2
Your Total Score: 
2661
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

    unsigned int reverseBits(unsigned int n)
    {
        unsigned int res = 0;
        
        while(n != 0){
            
            res = res << 1;
            
            if(n & 1 == 1){
                res++;
            }
            n = n >> 1;
        }
        return res;
    }
