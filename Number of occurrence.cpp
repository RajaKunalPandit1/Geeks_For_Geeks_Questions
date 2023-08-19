Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2778
Total Time Taken: 
0.18
Correct Submission Count: 
3
Attempts No.: 
10

int count(int arr[], int n, int x) {
	    
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==x){
	            count++;
	        }
	    }
	    return count;
	}
