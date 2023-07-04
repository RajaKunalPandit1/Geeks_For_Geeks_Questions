Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2657
Total Time Taken: 
0.16
Your Accuracy: 
100%
Attempts No.: 
1

// Naive Sol :: Time : O(N^2) :: Aux_Space : O(1)

    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            
            long long curr_sum = 1;
            
            for(int j=i;j<n;j++){
                
                curr_sum *= a[j];
                
                if(curr_sum < k){
                    res++;
                }else{
                    break;
                }
            }
        }
        return res;
    }

// Efficient Sol :: Time : O(N) :: Aux_Space : O(1)

    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int res = 0;
        int low = 0;
        long long curr_sum = 1;
        
        for(int i=0;i<n;i++){
            
            curr_sum *= a[i];
            
            while(curr_sum >= k && low < i){
                curr_sum /= a[low];
                low++;
            }
            
            if(curr_sum < k){
                res+= (i-low)+1;
            }
            
        }
        return res;
    }
