Output Status :

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
165 /165
Your Total Score: 
2653
Total Time Taken: 
0.44
Correct Submission Count: 
2
Attempts No.: 
19

// Time : O(N^2) :: Aux_Space : O(1)

vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
        for(int i=0;i<n;i++){
                
            long long res = 0;
            
            for(int j=i;j<n;j++){
                
                res += arr[j];
                
                if(res == s){
                    return {i+1,j+1};
                }
                
            }
        }
        return {-1};
    }

// Time : O(N) :: Aux_Space : O(1)

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
