Output Status :

Problem Solved Successfully
Test Cases Passed: 
11100 /11100
Total Points Scored: 
2 /2
Your Total Score: 
1797
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	int NthRoot(int n, int m)
	{
	    int low = 0,high = m;
	    
	    int mid = 0;
	    
	    while(low <= high){
	        
	        mid = (low + high)/2;
	        double t = pow(mid,n);
	        if(t == m){
	            return mid;
	        }
	        if(t < m){
	            low = mid+1;
	        }else{
	            high = mid-1;
	        }
	    }
	    return -1;
	}  
};
