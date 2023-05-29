Output Status : 

Problem Solved Successfully
Test Cases Passed: 
62 /62
Total Points Scored: 
1 /1
Your Total Score: 
2370
Total Time Taken: 
0.27
Your Accuracy: 
33%
Attempts No.: 
3


class Solution {
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        
        long sum = 0,res = INT_MIN;
        
        int j=0;
        
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        
        res = max(res,sum);
        
        for(int i=k;i<n;i++){
            sum -= arr[i-k];
            sum += arr[i];
            
            res = max(res,sum);
        }
        return res;
    }
};
