Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
292 /292
Your Total Score: 
1296
Total Time Taken: 
0.38
Correct Submission Count: 
2
Attempts No.: 
2

class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    
	    for(int i=0;i<n-1;i++){
	        
	        if(arr[i] > arr[i+1]){
	            
	            arr[i] = arr[i+1];
	        }else{
	            arr[i] = -1;
	        }
	    }
	    arr[n-1] = -1;
	}
  
  
