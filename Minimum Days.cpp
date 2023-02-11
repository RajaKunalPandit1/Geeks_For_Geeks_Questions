Output Status : 

Problem Solved Successfully
Test Cases Passed: 
265 /265
Total Points Scored: 
4 /4
Your Total Score: 
1925
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        
        int match = 0;
        for(int i = 0; i < N - 1; i++) {
            if(S[i] == S[i + 1]) match++;
        }
        
        if(match == 0) return 0;
        for(int day = 0; day < N; day++) {
            int j = P[day];
            if(j + 1 < N and S[j] == S[j + 1]) match--; // reduce match
            if(j >= 0 and S[j - 1] == S[j]) match--;
            S[j] = '?';
            if(!match) return day + 1;
        }
        return 0;
        
    }
};
