Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2081
Total Time Taken: 
3.15
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        
                vector<int>res(N,0);
        
        unordered_set<int>st1;
        unordered_map<int,int>mp1;
        for(int i = 0;i<N;i++){
            mp1[i] = st1.size();
            st1.insert(A[i]);
            
        }
        
        unordered_set<int>st2;
        unordered_map<int,int>mp2;
          for(int i = N-1;i>=0;i--){
            mp2[i] = st2.size();
            st2.insert(A[i]);
            
        }
          for(int i = 0;i<N;i++){
           res[i] = mp1[i]-mp2[i];
            
        }
        
        return res;
        
    }
};
