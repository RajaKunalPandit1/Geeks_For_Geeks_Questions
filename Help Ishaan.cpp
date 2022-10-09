Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10200 /10200
Total Points Scored: 
2 /2
Your Total Score: 
1452
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	    bool prime(int n){
	        
	        if(n<=1){return false;}
	        
	        for(int i=2;i<=sqrt(n);i++){
	            if(n%i == 0){
	                return false;
	            }
	        }
	        return true;
	    }
	
		int NthTerm(int n){
		    
		    int i=n;
		    int j=n;
		    
		    while(1){
		        
		        if(prime(i)){
		            break;
		        }
		        if(prime(j)){
		            break;
		        }
		        i--;
		        j++;
		    }
		    return min(abs(n-i),abs(n-j));
		}
 };
