Output Status : 

Problem Solved Successfully
Test Cases Passed: 
170 /170
Total Points Scored: 
2 /2
Your Total Score: 
1903
Total Time Taken: 
0.18
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    
	    if(n==1){
	         return arr[0];
	     }
	    int prevofprev=arr[0];
	    int prev=max(arr[0],arr[1]);
	    for(int i=2;i<n;i++){
	        int curr=prevofprev+arr[i];
	        prevofprev=prev;
	        prev=max(prev,curr);
	    }
	    return prev;
	}
};
