Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1107 /1107
Total Points Scored: 
2 /2
Your Total Score: 
2009
Total Time Taken: 
0.01
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        int gcd = __gcd(L,B);
        return {(L/gcd) * (B/gcd),gcd};
    }
};
