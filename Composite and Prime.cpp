Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10121 /10121
Total Points Scored: 
4 /4
Your Total Score: 
1386
Total Time Taken: 
0.15
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
	public:
	    
	    bool isPrime(int n){
	        
	        for(int i=2;i<=sqrt(n);i++){
	            if(n%i == 0){
	                return false;
	            }
	        }
	        return true;
	    }
	    
	
		int Count(int L, int R){
		    
		    int p = 0;
		    int c = 0;
		    
		    for(int i=L;i<=R;i++){
		        
		        if(i==1){
		            continue;
		        }else{
		            if(isPrime(i) == 1){
		                p++;
		            }else{
		                c++;
		            }
		        }
		    }
		    return c-p;
		}
};
