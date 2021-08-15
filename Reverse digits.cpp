Output Status:
Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/1.2
Your Accuracy:
50%
Attempts No.:
2

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		   long long int res=0;
		   while(n!=0){
		       int rem = n%10;
		       res = res*10+rem;
		       n= n/10;
		   }
		   return res;
		}
};


// Another Solution 


class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
			long long int rev_n = 0;
			while(n > 0)
			{
		        rev_n = rev_n*10 + n%10;
		        n = n/10;
			}
			return rev_n;
		}
};
