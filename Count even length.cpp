Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
4 /4
Your Total Score: 
1775
Total Time Taken: 
0.51
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	const int mod = 1e9 + 7;
	
	long xgcd(long a, long b, long &x,long &y){
	    if(a == 0){
	        x = 0;
	        y = 1;
	        return b;
	    }
	    long x1,y1;
	    long d = xgcd(b%a,a,x1,y1);
	    x = y1 - (b/a) * x1;
	    y = x1;
	    return d;
	}
	
	long modular_inverse(long a, long m = 1e9+7){
	    long x,y;
	    long g = xgcd(a,m,x,y);
	    if(g != 1){
	        return -1;
	    }else{
	        x = (x%m + m)%m;
	        return x;
	    }
	}
	
	void preCal(long n, vector<long> &fact, long mod = 1e9+7){
	    
	    fact[0] = 1;
	    for(long i = 1;i<=n;i++){
	        fact[i] = ((long)(fact[i-1]) * (long)i) %mod;
	    }
	    
	}
	
	long nCr(long n, long r, vector<long> &fact){
	    return ((fact[n]*(modular_inverse(fact[n-r])%mod)%mod) * (modular_inverse(fact[r])%mod)) %mod;
	}
	
	int compute_value(int n)
	{
	    vector<long> fact(n+1);
	    preCal(n,fact);
	    long ans = 0;
	    
	    for(int i=0;i<=n;i++){
	        long choose = nCr(n,i,fact);
	        ans = (ans + (choose * choose)%mod)%mod;
	    }
	    return ans;
	}
};
