Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2770
Total Time Taken: 
0.38
Your Accuracy: 
100%
Attempts 

    int MOD = 1e9 + 7;
    int findCatalan(int n) 
    {
        long long c[n + 1] = {0};
        c[0] = c[1] = 1;
 
        for (int i = 2; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                c[i] = (c[i] + (c[j] * c[i - 1 - j])) % MOD;
            }
        }
 
        return (int)c[n];
    }
