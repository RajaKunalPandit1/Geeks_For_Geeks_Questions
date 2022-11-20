Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1000105 /1000105
Total Points Scored: 
4 /4
Your Total Score: 
1614
Total Time Taken: 
0.85
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long lcmTriplets(long long n) {
        
        if(n==1 || n == 2){
            return n;
        }
        
        if(n%2 != 0){
            return (n*(n-1)*(n-2));
        }
        if(n%3 == 0){
            return ((n-1)*(n-2)*(n-3));
        }
        return max((n*(n-1)*(n-3)),((n-1)*(n-2)*(n-3)));
    }
};
