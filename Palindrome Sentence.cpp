Output Status : 

Problem Solved Successfully
Test Cases Passed: 
304 /304
Total Points Scored: 
2 /2
Your Total Score: 
2448
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

	bool sentencePalindrome(string s) 
	{
	    
	    int n = s.length();
	    
	    int low = 0,high = n-1;
	    
	    while(low <= high){
	        
	        while(s[low] == ' ' || !isalpha(s[low])){
	            low++;
	        }
	        while(s[high] == ' ' || !isalpha(s[high])){
	            high--;
	        }
	        
	        if(s[low] != s[high]){
	            return false;
	        }else{
	            low++;
	            high--;
	        }
	    }
	    return true;
	}
