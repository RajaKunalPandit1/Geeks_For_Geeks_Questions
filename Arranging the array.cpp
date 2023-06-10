Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1211 /1211
Total Points Scored: 
4 /4
Your Total Score: 
2423
Total Time Taken: 
0.32
Your Accuracy: 
25%
Attempts No.: 
4

// Naive Solution :: Time : O(N) :: Aux_Space : O(N)
  
class Solution {
{
    public:
        void Rearrange(int arr[], int n)
        {
            
            int brr[n];
            
            int idx = 0;
            
            for(int i=0;i<n;i++){
                if(arr[i] < 0){
                    brr[idx++] = arr[i];
                }
            }
            
            for(int i=0;i<n;i++){
                if(arr[i] >= 0){
                    brr[idx++] = arr[i];
                }
            }
            
            for(int i=0;i<n;i++){
                arr[i] = brr[i];
            }
        }
};
  
// Efficient Sol :: Time : O(N*logN) :: Aux_Space : O(logN)
  
 class Solution{
    public:
    
        void merge(int arr[],int low, int mid, int high){
            
            vector<int> temp;
            int right = mid+1;
            int left = low;
            
            while(left <= mid && right <= high){
                
                if(arr[left] < 0){
                    temp.push_back(arr[left++]);
                }else if(arr[right] < 0){
                    temp.push_back(arr[right++]);
                }else{
                    temp.push_back(arr[left++]);
                }
            }
            
            while(left <= mid){
                temp.push_back(arr[left++]);
            }
            
            while(right <= high){
                temp.push_back(arr[right++]);
            }
            
            for(int i=low;i<=high;i++){
                arr[i] = temp[i-low];
            }
        }
        
        void merge_sort(int arr[],int low, int high){
            
            if(low >= high){
                return;
            }
            
            int mid = (low + high) >> 1;
            
            merge_sort(arr,low,mid);
            merge_sort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    
        void Rearrange(int arr[], int n){
            merge_sort(arr,0,n-1);
        }
  };
