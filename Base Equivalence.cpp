Output Status : 

Problem Solved Successfully
Test Cases Passed: 
104 /104
Total Points Scored: 
4 /4
Your Total Score: 
1548
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    string baseEquiv(int n, int m){
        
        int temp = n;
        
        for(int i=2;i<=32;i++){
            n = temp;
            int cnt =0;
            while(n>0){
                n = n/i;
                cnt++;
            }
            if(cnt == m){
                return "Yes";
            }
        }
        return "No";
    }
};
