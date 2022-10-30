Output Status : 

Problem Solved Successfully
Test Cases Passed: 
105 /105
Total Points Scored: 
2 /2
Your Total Score: 
1532
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
	long long int NoOfChicks(int n){
	   
	   long long dp[40];
	   
	   dp[1] = 1;
	   
	   for(int i=2;i<=n;i++){
	       if(i<7){
	           dp[i] = dp[i-1] + dp[i-1]*2;
	       }else if(i == 7){
	           long long res = dp[i-1] - dp[i-6];
	           dp[i] = res + res*2;
	       }else{
	           long long res = dp[i-1] - (dp[i-6]/3)*2;
	           dp[i] = res + res*2;
	       }
	   }
	   return dp[n];
	}
};
