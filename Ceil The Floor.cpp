Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
360 /360
Your Total Score: 
2565
Total Time Taken: 
0.32
Correct Submission Count: 
2
Attempts No.: 
2

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    int ceil1 = INT_MAX,floor1 = -1;
    
    for(int i=0;i<n;i++){
            
        if(arr[i] >= x){
            ceil1 = min(arr[i],ceil1);
        }
        
        if(x >= arr[i]){
            floor1 = max(arr[i],floor1);
        }
    }
    
    if(ceil1 == INT_MAX) ceil1 = -1;
    
    return {floor1,ceil1};
}
