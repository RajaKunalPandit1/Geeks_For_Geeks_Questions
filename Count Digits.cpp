Output Status : 

Problem Solved Successfully
Test Cases Passed: 
285 /285
Total Points Scored: 
0 /0
Your Total Score: 
2446
Total Time Taken: 
0.01
Your Accuracy: 
33%
Attempts No.: 
3

    int evenlyDivides(int n){
        
        int res = 0;
        int temp = n;
        
        while(temp != 0){
            
            int var = (int)(temp%10);
            
            if(var !=0 && n%var == 0)
            {
                res++;
            }
            temp /= 10;
        }
        return res;
        
    }
