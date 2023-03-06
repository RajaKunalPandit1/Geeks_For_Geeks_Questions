Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1109 /1109
Total Points Scored: 
4 /4
Your Total Score: 
2025
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {

  public:
    int noConseBits(int n) {
        for(int i=31;i>=2;i--){
            int one = (1<<i);
            int two = (1<<(i-1));
            int three = (1<<(i-2));
            if(((one&n)!=0) and ((two&n)!=0) and ((three&n)!=0)){
                n = (n^three);
            }
        }
        return n;
    }
};
