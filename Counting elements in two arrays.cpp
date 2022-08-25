Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
432 /432
Your Total Score: 
1306
Total Time Taken: 
0.72
Correct Submission Count: 
3
Attempts No.: 
5


class Solution{
  public:
  
    int binary_search(int arr[],int low , int high, int x){
        
        while(low <= high){
            
            int mid = (low+high) >> 1;
            
            if(arr[mid] <= x){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return high;
    }
  
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int> res;
        
        sort(arr2,arr2+n);
        
        for(int i=0;i<m;i++){
            
            int idx = binary_search(arr2,0,n-1,arr1[i]);
            res.push_back(idx+1);
        }
        return res;
    }
};
