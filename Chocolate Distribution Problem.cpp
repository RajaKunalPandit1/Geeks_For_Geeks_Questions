Output Status :

Problem Solved Successfully
Test Cases Passed: 
370 /370
Total Points Scored: 
2 /2
Your Total Score: 
2380
Total Time Taken: 
0.82
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
            
        sort(a.begin(),a.end());
        
        long long res = a[m-1] - a[0];
        
        for(int i=1;i<=n-m;i++){
            res = min(res,a[i+m-1]-a[i]);
        }
        return res;
    }
};
