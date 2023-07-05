Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
210 /210
Your Total Score: 
2665
Total Time Taken: 
0.32
Correct Submission Count: 
3
Attempts No.: 
5

   int equilibriumPoint(long long a[], int n) {
    
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        
        int l_sum = 0;
        
        for(int i=0;i<n;i++){
            
            if(l_sum == sum-a[i]){
                return i+1;
            }
            l_sum += a[i];
            sum -= a[i];
        }
        return -1;
    }

