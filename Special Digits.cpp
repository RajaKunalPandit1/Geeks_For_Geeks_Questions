Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1130 /1130
Total Points Scored: 
8 /8
Your Total Score: 
2155
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
      long long multInv(long long num, long long mod, long long n)
  {
      if(n == 0)
      return 1;
      
      long long val = multInv(num, mod, n / 2);
      val = (val * val) % mod;
      
      if(n & 1)
      val = (val * num) % mod;
      
      return val;
  }
  
  bool check(long long k, int a, int b)
  {
      while(k)
      {
          int num = k % 10;
          if(num != a && num != b)
          return false;
          k/=10;
      }
      return true;
  }
    int bestNumbers(int N, int A, int B, int C, int D) {
        // code here
        
        long long sum, num, mod = pow(10,9)+7, ans = 0;
        long long fact[N], i;
        
        // fact[i] will contain factorial of i
        fact[0] = 1;
        
        for(i = 1; i <= N; i++)
        {
            fact[i] = (fact[i-1] * i) % mod;
        }
        
        for(int k = 0; k <= N; k++)
        {
            // sum contains sum of digit of number which containg 'k' times digit A and 'N-k' times digit B
            sum = A*k + B*(N-k);
            
            // it will check whether my sum contains only digit C and D or not
            bool flag = check(sum, C, D);
            
            // if my sum does not contains only digits C and D..... then all those integers are good but not best
            // so we will do not consider those numbers.
            if(!flag )
            continue;
            
            // if my sum contains only digits C and D
            // then we have to find number of integers that contains k times digit A and 'n-k' times digit B
            // number of those integer will be nCk (at k places out of n we will place digit A and at rest of places we will place digit B)
            // you can deep dive into permutaition and combination chapter to get it's deep insite
            
            // nCk = n! / (k! * (n-k)!)
            // the issue here is n! can be very large so we have stored (n! % mod)
            // so we can not perform normal division
            // so, we have to find the multiplicative inverse of k! and (n-k)!
            
            // it will contain multplicative inverse of k!
            // multplicative inverse of k! = ((k!) ^ (mod - 2)) % mod
            // note that here 'k' and 'mod' should be co-prime
            // for more details refer "https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/"
            long long a = multInv(fact[k], mod, mod - 2);
            
            // it will contain multplicative inverse of (n-k)!
            long long b = multInv(fact[N-k], mod, mod - 2);
            
            // so now, nCk = a * b * n!
            // our num contains value of nCk i.e, number of integers which contains k times digit A and 'n-k' times digit B
            num = (((a * b) % mod) * fact[N])%mod;
            
            // since all these integers are 'best integers' , so we will add these in our answer
            ans = (ans + num) % mod;
        }
        return ans;
    }
};
