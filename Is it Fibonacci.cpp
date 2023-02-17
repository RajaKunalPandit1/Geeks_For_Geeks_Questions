Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1112 /1112
Total Points Scored: 
2 /2
Your Total Score: 
1949
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        
        if(N==K) return GeekNum[K-1];
        
        long long int sum=0;
        for(auto it:GeekNum) sum+=it;
        
        for(int i=K;i<N;i++)
        {
            GeekNum.push_back(sum);
            sum+=sum;
            sum-=GeekNum[i-K];
        }
        return GeekNum[N-1];
        
    }
};
