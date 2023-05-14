Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2297
Total Time Taken: 
0.1
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        
      vector<long long> prev(2), curr(2); 
   // Maximum subset sum till index 0, excluding A[0]
          prev[0] = 0;   
 // Maximum subset sum till index 0, including A[0] 
        prev[1] = A[0]; 
    for (int i = 1; i < N; i++)
    {
        // Maximum subset sum till index i, including A[i]
            curr[1] = A[i] + max(prev[0], prev[1]);
        // Maximum subset sum till index i, excluding A[i]
            curr[0] = prev[1];
        // Assigning curr to prev for the next iteration
        prev = curr;
    }
    // Maximum subset sum till index N-1
    return max(prev[0], prev[1]);
        
    }
};
