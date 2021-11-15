Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        if(n*9 < sum){
            return "-1";
        }
        string res;
        
        for(int i=0;i<n;i++){
            if(sum>=9){
                res.insert(i,"9");
                sum-=9;
            }else if(sum>0 && sum < 9){
                string r = to_string(sum);
                res.insert(i,r);
                sum-= sum;
            }else{
               res.insert(i,"0");
            }
        }
        return res;
    }
};

// Another Solution 


class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        //maximum achievable sum is 9*n. if given sum is 
        //greater than that, we return -1.
        if(sum > 9*n)
    		return "-1";
        
        int temp;
        string str = "";
    	for(int i=0;i<n;i++)
    	{
    	    temp = 0;
    		if(sum!=0)
    		    //if sum>9 we store 9 in temp as digit or we store the sum.
    			temp = sum>9? 9 : sum;
    			
    		//storing the number in temp as character in final string.
    		str += (char)(temp + '0');
    		//updating the sum.
    		sum -= temp;
    	}
    	//returning the final string.
    	return str;
    }
};


