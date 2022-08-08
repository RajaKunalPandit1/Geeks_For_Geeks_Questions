Output Status : 

Problem Solved Successfully
Test Cases Passed: 
214 /214
Total Points Scored: 
2 /2
Your Total Score: 
1275
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

// Time : O(N) :: Aux_Space : O(N)

class Solution
{
    public:
    
    int jos(int n, int k){
        if(n == 1) return 0;
        
        return (jos(n-1,k) + k) % n;
    }
    
    int josephus(int n, int k)
    {
       return jos(n,k) + 1;
    }
};

// Another Solution 


class Solution
{
    public:
    int josephus(int n, int k)
    {
      if (n == 1) //base case
        return 1;
      else
      
      /* The position returned by josephus(n - 1, k) is adjusted because the 
           recursive call josephus(n - 1, k) considers the original position  
           k%n + 1 as position 1 */
        return (josephus(n - 1, k) + k-1) % n + 1; //recursion
    }

};
