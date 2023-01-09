Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
600 /600
Your Total Score: 
1797
Total Time Taken: 
0.29
Correct Submission Count: 
3
Attempts No.: 
6

int first(int arr[], int n,int x, int low, int high){
    
    while(low <= high){
        
        int mid = (low+high)/2;
        
        if(arr[mid] > x){
            high = mid-1;
        }else if(arr[mid] < x){
            low = mid+1;
        }else{
            if(arr[mid] != arr[mid-1] || mid == 0){
                return mid;
            }else{
                high = mid-1;
            }
        }
    }
        return -1;
}

int last(int arr[], int n, int x, int low , int high){
    
    
    while(low <= high){
        
        int mid = (low+high)/2;
        
        if(arr[mid] > x){
            high = mid-1;
        }else if(arr[mid] < x){
            low = mid+1;
        }else{
            if(arr[mid] != arr[mid+1] || mid == n-1){
                return mid;
            }else{
                low = mid+1;
            }
        }
    }
    
    return -1;
}

vector<int> find(int arr[], int n , int x )
{
    
    int low =0,high = n-1;
    
    int firstOccur = first(arr,n,x,low,high);
    int lastOccur = last(arr,n,x,low,high);
    
    return {firstOccur,lastOccur};
}
