Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.0
Your Accuracy:
50%
Attempts No.:
2
  
  
  class Solution{
    public:
    
    string modify (string s)
    {
        int n = s.length();
        if(islower(s[0])){
            for(int i=1;i<n;i++){
                s[i] = tolower(s[i]); 
            }
        }else{
            for(int i=1;i<n;i++){
                s[i] = toupper(s[i]);
            }
        }
        return s;
        
    }
 };   


// Another Solution

class Solution{
    public:
    
    string modify (string s)
    {
        // check if the string has to be made lowercase of uppercase
    	bool upper;
    	if (s[0] >= 'A' and s[0] <= 'Z')
    		upper = true;
    	else
    		upper = false;
    
    	for (int i = 1; i < s.length (); ++i)
    	{
    		if (upper)
    		{
    		    // converting to uppercase
    			if (s[i] >= 'a' and s[i] <= 'z')
    				s[i] = s[i] - 'a' + 'A';
    		}
    		else
    		{
    		    // converting to lowercase
    			if (s[i] >= 'A' and s[i] <= 'Z')
    				s[i] = s[i] - 'A' + 'a';
    		}
    	}
    	return s;
    }
};
