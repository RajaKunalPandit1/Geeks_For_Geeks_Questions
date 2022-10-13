Output Status : 

Problem Solved Successfully
Test Cases Passed: 
160 /160
Total Points Scored: 
2 /2
Your Total Score: 
1466
Total Time Taken: 
0.78
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	
    	int a = *max_element(A,A+N);
    	int b = *min_element(A,A+N);
    	
    	return a+b;
    }
};
