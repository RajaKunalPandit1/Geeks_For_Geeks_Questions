Output Status: 

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
225 / 225
Total Time Taken:
0.35/1.82
Correct Submission Count:
2
Attempts No.:
2

int chocolates(int arr[], int n)
{
    int mini = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

// Another Solution 

int chocolates(int arr[], int n)
{
    int i = 0;
    int j = n-1;
    
    while(i < j and n > 1){
        if(arr[i]> arr[j])
            i++;
        else
            j--;
        n--;
    }
    return arr[i];
    
}
