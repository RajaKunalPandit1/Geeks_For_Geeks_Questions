Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1200 /1200
Total Points Scored: 
2 /2
Your Total Score: 
1522
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	    int mod = 1000000007;
		int NthTerm(int n){
		    
		    long long int prev = 2;
		    
		    for(int i=2;i<=n;i++){
		        prev = ((prev*i)+1)%mod;
		    }
		    return prev%mod;
		}
};
