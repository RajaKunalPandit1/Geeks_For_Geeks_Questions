Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1111 /1111
Total Points Scored: 
2 /2
Your Total Score: 
2327
Total Time Taken: 
0.09
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            res += abs(chairs[i] - passengers[i]);
        }
        return res;
    }
};
