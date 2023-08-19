Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1128 /1128
Your Total Score: 
2778
Total Time Taken: 
0.49
Correct Submission Count: 
3
Attempts No.: 
20

vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       int res = 0;
        int low = 0;
        
        for(int i=0;i<n;i++){
            
            res += arr[i];
            
            
            while(res > s && low < i){
                res -= arr[low++];
            }
            
            if(res == s){
                return {low+1,i+1};
            }
        }
        
        return {-1};
    }
