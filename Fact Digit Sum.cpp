Output Status : 

Problem Solved Successfully
Test Cases Passed: 
802 /802
Total Points Scored: 
2 /2
Your Total Score: 
1296
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	   
	   int fact[10];
	   
	   fact[0] = 1;
	   vector<int> res;
	   
	   for(int i=1;i<10;i++){
	       fact[i] = fact[i-1]*i;
	   }
	   
	   for(int i=9;i>=0;i--){
	       
	       while(N>=fact[i]){
	           
	           N -= fact[i];
	           res.push_back(i);
	           
	       }
	   }
	   
	   reverse(res.begin(),res.end());
	   return res;
	   
	}
