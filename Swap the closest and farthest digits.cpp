Output Status: 

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1

class Solution
{
    public:
        void swapDigits(string &N1, string &N2)
        {
        	int n1 = N1.length();
        	int n2 = N2.length();
        	
        	int low1=0,high1 = n1-1;
        	int low2=0,high2 = n2-1;

    	    swap(N1[low1],N2[high2]);
    	    swap(N2[low2],N1[high1]);
        	    
        	
        }
};

// Another Solution 


class Solution
{
    public:
        void swapDigits(string &N1, string &N2)
        {
        	int n1 = N1.size(), n2 = N2.size();
        	swap(N1[0], N2[n2-1]);
        	swap(N1[n1-1], N2[0]);
        }
};
