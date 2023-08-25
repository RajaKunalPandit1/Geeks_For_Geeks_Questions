Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2788
Total Time Taken: 
0.01
Correct Submission Count: 
4
Attempts No.: 
4

	int isPalindrome(string S)
	{
	   
	   int low = 0,high = S.size()-1;
	   
	   while(low <= high){
	       
	       if(S[low++] != S[high--]){
	           return 0;
	       }
	   }
	   return 1;
	}
