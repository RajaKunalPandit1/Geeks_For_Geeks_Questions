Output Status :

Problem Solved Successfully
Test Cases Passed: 
320 /320
Total Points Scored: 
4 /4
Your Total Score: 
1596
Total Time Taken: 
0.22
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    
	    int i=0;
	    
	    long count = 0;
	    
	    int j;
	    
	    while(i<n){
	        
	        if(arr[i] > k){
	            count += (n-i);
	        }else{
	            j = i;
	            
	            while(j<n){
	                
	                if(arr[j] > k){
	                    count += n - j;
	                    break;
	                }
	                j++;
	            }
	        }
	        i++;
	    }
	    return count;
	}
};
