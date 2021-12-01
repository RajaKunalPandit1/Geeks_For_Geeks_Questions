Output Status:

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1


class Solution{
public:	

	string removeCharacters(string S) 
	{
	   
	    int n = S.length();
	    string res;
	    
	    for(int i=0;i<n;i++){
	        if(!isalpha(S[i])){
	            res+= S[i];
	        }
	    }
	    return res;
	   
	}
};
