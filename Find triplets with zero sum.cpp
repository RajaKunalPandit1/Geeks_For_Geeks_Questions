Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2673
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
2


    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            
            if(i == 0 || (arr[i] != arr[i-1])){
                
                int j=i+1,k = n-1;
                int x = 0-arr[i];
                
                while(j < k){
                    
                    if(arr[j] + arr[k] == x){
                        return 1;
                    }else if(arr[j] + arr[k] > x){
                        k--;
                    }else{
                        j++;
                    }
                }
            }
        }
        return 0;
    }
