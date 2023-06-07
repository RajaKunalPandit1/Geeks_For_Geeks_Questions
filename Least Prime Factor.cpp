Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1121 /1121
Your Total Score: 
2404
Total Time Taken: 
0.03
Correct Submission Count: 
2
Attempts No.: 
2

class Solution {
  public:
    int cal(int n ){
        
      for(int i=2;i<=sqrt(n); i++ ){
          if(n%i==0)
          return i ;
      }
      return n ;
  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans ;
        ans.push_back(0); 
        
        for(int i = 1; i<=n;i++ ){
            ans.push_back(cal(i));     
        }
        return ans ; 
    }
};
