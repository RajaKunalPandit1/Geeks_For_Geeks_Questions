Output Status : 

Problem Solved Successfully
Test Cases Passed: 
304 /304
Total Points Scored: 
2 /2
Your Total Score: 
2659
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1


int searchInsertK(vector<int>arr, int n, int k)
    {
        
        int low = 0,high = n-1;
        int res = 0;
        
        while(low <= high){
            
            int mid = (low + high) >> 1;
            
            if(arr[mid] == k){
                return mid;
            }else if(arr[mid] < k){
                res = mid+1;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return res;
    }
