Output Status : 

Problem Solved Successfully
Test Cases Passed: 
101020 /101020
Total Points Scored: 
2 /2
Your Total Score: 
1350
Total Time Taken: 
0.5
Your Accuracy: 
100%
Attempts No.: 
1



class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        
        long long res = 0;
        
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        for(int i=0;i<N;i++){
            res += abs(A[i]-B[i]);
        }
        return res;
    }
};
