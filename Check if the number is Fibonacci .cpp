Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  
//   HINT: A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square.
  
  
  class Solution{
  public:
    string checkFibonacci(int N){
        
        int i = (5*N*N + 4);
        int j = (5*N*N - 4);
        
        int sq1 = sqrt(i),sq2 = sqrt(j);
        
       if(sq1 * sq1 == i || sq2 * sq2 == j){
           return "Yes";
       }
       return "No";
        
    }
};

// Another Solution 

class Solution{   
public:
    
    // A utility function that returns true if x is perfect square
    bool isPerfectSquare(int x)
    {
    	int s = sqrt(x);
    	return (s*s == x);
    }
    
    // Returns true if n is a Fibinacci Number, else false
    bool isFibonacci(int n)
    {
    	// n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    	// is a perferct square
    	return isPerfectSquare(5*n*n + 4) ||
    		isPerfectSquare(5*n*n - 4);
    }
    
    string checkFibonacci(int N){
        
        if(isFibonacci(N))
            return "Yes";
        else
            return "No";
        
    }
};
