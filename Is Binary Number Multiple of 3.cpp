Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2643
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

	int isDivisible(string s){
	    
	    int n = s.length();
	    int odd = 0,eve = 0;
	    
	    for(int i=0;i<n;i++){
	        
	        if(s[i] == '1'){
	            
	           if(i%2 == 0){
	               odd++;
	           }else{
	               eve++;
	           }
	        }
	    }
	    return ((odd-eve)%3 == 0);
	}
