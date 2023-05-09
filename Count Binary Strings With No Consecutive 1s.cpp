Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
8 /8
Your Total Score: 
2271
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

typedef long long int ll;
class Solution {
  public:
    int mod = 1000000007;
    
    vector<vector<ll>> mul(vector<vector<ll>>& A, vector<vector<ll>>& B){
        int i, j;
        vector<vector<ll>> v(2, vector<ll>(2));
        
        v[0][0] = ((A[0][0]*B[0][0])%mod + (A[0][1]*B[1][0])%mod)%mod;
        v[0][1] = ((A[0][0]*B[0][1])%mod + (A[0][1]*B[1][1])%mod)%mod;
        v[1][0] = ((A[1][0]*B[0][0])%mod + (A[1][1]*B[1][0])%mod)%mod;
        v[1][1] = ((A[1][0]*B[0][1])%mod + (A[1][1]*B[1][1])%mod)%mod;
        
        return v;
        
    }
    
    vector<vector<ll>> bin_pow(vector<vector<ll>>& A, ll n){
        
        vector<vector<ll>> v(2, vector<ll>(2, 1));
        
        while(n > 0){
            if(n&1)
                v = mul(v, A);
            
            A = mul(A, A);
            n = n>>1;
        }
        
        return v;
    }
    
    int countStrings(long long int N) {
        // Code here
        
        vector<vector<ll>> v(2, vector<ll>(2));
        v[0][0] = 1;
        v[0][1] = 1;
        v[1][0] = 1;
        v[1][1] = 0;
        
        v = bin_pow(v, N);
        
        return v[0][0];
    }
};
