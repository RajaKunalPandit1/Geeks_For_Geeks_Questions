Output Status : 

Problem Solved Successfully
Test Cases Passed: 
121 /121
Total Points Scored: 
2 /2
Your Total Score: 
1795
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int solve(int n, vector<int> arr) {
        
        int res = 0;
        
        for(int i=n-1;i>=0;i--){
            if(arr[i] < 9){
                res = i;
                break;
            }
        }
        return res+1;
    }
};
