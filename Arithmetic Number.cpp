Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
2 /2
Your Total Score: 
1935
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
public:
    int inSequence(int A, int B, int C){
        if(C==0){
            return A==B;
        }
        else if((B-A)%C==0 and (B-A)/C >=0){
            return 1;
        }
        else{
            return 0;
        }
    }
};
