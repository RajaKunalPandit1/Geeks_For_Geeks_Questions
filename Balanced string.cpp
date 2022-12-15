Output Status : 

Problem Solved Successfully
Test Cases Passed: 
166 /166
Total Points Scored: 
2 /2
Your Total Score: 
1723
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1
  
  class Solution {
  public:
    string BalancedString(int N) {
        
         string alphabet = "abcdefghijklmnopqrstuvwxyz";

        string ans = "";

        int dig = N;

        while(N > 26){
            ans += alphabet;
            N -= 26;
        }

        int start = 0, end = 0;

        int sum = 0;

        while(dig > 0){
            sum += dig % 10;
            dig /= 10;
        }

        if((N & 1) == 1){
            if((sum & 1) == 1){
                start = (N - 1) / 2;
                end = (N + 1) / 2;
            }else {
                start = (N + 1) / 2;

                end = (N - 1) / 2;
            }
        }else{
                start = N / 2;
                end = N / 2;

        }
        ans += alphabet.substr(0, (start));

        ans += alphabet.substr((26 - end), end);

        return ans;
    }
};
