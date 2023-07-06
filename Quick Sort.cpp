Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2667
Total Time Taken: 
0.02
Correct Submission Count: 
3
Attempts No.: 
6

    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[low];
        int i=low-1;
             
        for(int j=low;j<=high;j++){
               
           if(arr[j]<=pivot){
               i++;
               swap(arr[i],arr[j]);
           }  
        }
       swap(arr[i],arr[low]);
       return i;
    }
