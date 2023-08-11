Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2758
Total Time Taken: 
0.39
Your Accuracy: 
50%
Attempts No.: 
2

     long long int count(int coins[], int N, int sum) {

        vector<vector<long long int>> dp(N, vector<long long int>(sum + 1, 0));
        vector<long long int> prev(sum + 1, 0), cur(sum + 1, 0);

        for (long long int t = 0; t <= sum; t++) {
            prev[t] = (t % coins[0] == 0);
        }

        for (long long int ind = 1; ind < N; ind++) {
            for (long long int t = 0; t <= sum; t++) {
                long long int notTake = prev[t];
                long long int take = 0;
                if (coins[ind] <= t) {
                    take = cur[t - coins[ind]];
                }

                cur[t] = take + notTake;
            }

            prev = cur;
        }
        return prev[sum];
    }
