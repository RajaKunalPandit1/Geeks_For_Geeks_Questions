Output Status : 

Problem Solved Successfully
Test Cases Passed: 
329 /329
Total Points Scored: 
4 /4
Your Total Score: 
1502
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1
  
  
class Solution{
    public:
    int fillingBucket(int N) {
        int secondLast = 1,last = 1;
        
        for(int i=2;i<=N;i++){
            int temp = (last + secondLast)%100000000;
            secondLast = last;
            last = temp;
        }
        return last;
    }
};
