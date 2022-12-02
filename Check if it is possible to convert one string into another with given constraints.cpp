Output Status:

Problem Solved Successfully
Test Cases Passed: 
309 /309
Total Points Scored: 
2 /2
Your Total Score: 
1663
Total Time Taken: 
0.43
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        
        string post_s;
        string post_t;
        int n1 = T.length();
        int n2 = S.length();
        if (n1 != n2) {
            return 0;
        }

        for (int i = 0; i < n1; i++) {

            if (S[i] == 'A' || S[i] == 'B') {

                post_s += S[i];
            }
            if (T[i] == 'A' || T[i] == 'B') {

                post_t += T[i];
            }
        }
        if (post_s == post_t) {

            return 1;
        } else {

            return 0;

        }
    }
};
