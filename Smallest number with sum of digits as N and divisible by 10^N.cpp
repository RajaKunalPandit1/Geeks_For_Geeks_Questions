Output Status :

Problem Solved Successfully
Test Cases Passed: 
230 /230
Total Points Scored: 
2 /2
Your Total Score: 
1358
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	string digitsNum(int N)
	{
	    
	    int n = N/9;
	    
	    int zero = N;
	    
	    N -= n*9;
	    
	    return (N?to_string(N) : "") + string(n,'9') + string(zero,'0');
	    
	}
};
