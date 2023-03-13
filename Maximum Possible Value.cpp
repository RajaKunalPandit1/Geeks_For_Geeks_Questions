Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2053
Total Time Taken: 
1.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
         long long ans = 0;

        int count = 0;

        int mini = INT_MAX;

        for(int i= 0;i<A.size();i++){

            if(B[i]/2){
                ans += 2*(B[i]/2)*A[i];
                count+= (B[i]/2) ;
                mini = min(mini,A[i]); 
            }
        }

        if(count%2 == 1){
            ans = ans - 2*mini ;
        }

        return ans ;
    }
};
