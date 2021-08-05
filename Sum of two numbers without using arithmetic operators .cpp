Output Status:
Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.0/1.1
Correct Submission Count:
2
Attempts No.:
2
  
  class Solution
{
    public:
    int sum(int a , int b)
    {
        int sum,carry;
        while(b!=0){
            sum = a^b;
            carry = (a&b)<<1;
            a = sum;
            b = carry;
        }
        return sum;
        
    }
};

// Another Solution i.e, Recursive Solution

class Solution
{
    public:
    int sum(int a , int b)
    {
        
        if(b==0){
            return a;
        }else{
           return sum(a^b,(a&b)<<1);
        }
        
        
    }
};
