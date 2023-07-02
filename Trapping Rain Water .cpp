Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
152 /152
Your Total Score: 
2647
Total Time Taken: 
0.26
Correct Submission Count: 
4
Attempts No.: 
6

    long long trappingWater(int arr[], int n){
        
        long long res = 0;
        
        int lmax[n],rmax[n];
        lmax[0] = arr[0],rmax[n-1] = arr[n-1];
        
        for(int i=1;i<n;i++){
            lmax[i] = max(arr[i],lmax[i-1]);
        }
        
        for(int i=n-2;i>=0;i--){
            rmax[i] = max(arr[i],rmax[i+1]);
        }
        
        for(int i=1;i<n-1;i++){
            res += min(rmax[i],lmax[i])-arr[i];
        }
        return res;
    }
