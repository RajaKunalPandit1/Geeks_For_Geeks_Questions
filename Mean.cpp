Output Status: 

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.1/1.2
Your Accuracy:
100%
Attempts No.:
1


class Solution {
  public:
    int mean(int N , int A[]) {
        
        int sum = 0;
        
        for(int i=0;i<N;i++){
            sum += A[i];
        }
        
        return (sum/N);
        
    }
};
