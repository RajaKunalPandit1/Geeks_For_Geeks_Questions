Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1


  // Time: O(1) :: Space: O(1);
  
  class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        
        return (n & 0xAAAAAAAA);
        
    }
};

  
  
