Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
90 /90
Your Total Score: 
2483
Total Time Taken: 
0.33
Correct Submission Count: 
3
Attempts No.: 
7
Geek Tip:
Post your approach and suggestions in the comment section.
Go through the Problem Editorial and solutions submitted by others to know about alternate approaches to this problem. Keep coding !

		vector<string> AllPossibleStrings(string s){
		    
		    int n = s.length();
		    
		    int cases = pow(2,n);
		    
		    vector<string> res;
		    
		    for(int i=1;i<cases;i++){
		        
		        string str = "";
		        
		        for(int j=0;j<n;j++){
		            
		            if(i&(1<<j)){
		                str += s[j];
		            }
		        }
		        res.push_back(str);
		    }
		    sort(res.begin(),res.end());
		    
		    return res;
		}
    
    
