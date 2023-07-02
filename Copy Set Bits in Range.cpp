Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2647
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
3

    int setSetBit(int x, int y, int l, int r){
        
        for(int i=l-1;i<r;i++){
            if(1<<i & y)
                x=1<<i |x;
        }
        return x;
    }
