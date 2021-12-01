Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.0
Your Accuracy:
50%
Attempts No.:
2

class Solution{
public:
	
	int countSubstr (string S)
	{
	    
	    int n = S.length();
	    int cnt = 0;
	    int res = 0;
	    
	    for(int i=0;i<n;i++){
	        if(S[i] == '1'){
	            cnt++;
	        }
	    }
	    
	    return (cnt*(cnt-1))/2;
	    
	}
};

// Another Solution 


class Solution{
public:
	
	int countSubstr (string s)
	{
	    int cnt = 0;
	    for (int i = 0; i < s.length (); ++i)
	    {
	        if (s[i] == '1')
	            cnt++;
	    }

	    if (cnt <= 1)
	        return 0;
	    return ((cnt) * (cnt - 1)) / 2;
	}
	// Contributed By: Pranay Bansal


};
