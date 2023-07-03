Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
62 /62
Your Total Score: 
2653
Total Time Taken: 
0.3
Correct Submission Count: 
2
Attempts No.: 
5

// Time : O((N-k)*K) :: Aux_Space : O(k)

long maximumSumSubarray(int k, vector<int> &arr , int n){
        
        
        long res = 0;
        
        for(int i=0;i+k-1<n;i++){
            long curr_sum = 0;
            
            for(int j=0;j<k;j++){
                curr_sum += arr[i+j];
            }
            res = max(res,curr_sum);
        }
        return res;
    }

// Time : O(N) :: Aux-Space : O(1)

    long maximumSumSubarray(int k, vector<int> &arr , int n){
        
        
        long res = 0;
        long sum = 0;
        
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        
        res = max(res,sum);
        int idx = 0;
        
        for(int i=k;i<n;i++){
            
            sum += (arr[i]-arr[i-k]);
            res = max(res,sum);
        }
        return res;   
    }
