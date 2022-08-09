Output Status :

Problem Solved Successfully
Test Cases Passed: 
3602 /3602
Total Points Scored: 
4 /4
Your Total Score: 
1279
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

public:
    long long int nineDivisors(long long int N){
        
        int sN = sqrt(N);
        vector<bool> prime(sN+1,true);
        
        for(int i=2;i<=sqrt(sN)+1;i++){
            
            if(prime[i]){
                for(int j=i*i;j<=sN;j+=i){
                    prime[j] = 0;
                }
            }
        }
        
        vector<int> primes;
        
        for(int i=2;i<=sN;i++){
            if(prime[i]){
                primes.push_back(i);
            }
        }
        
        int primesSize = primes.size();
        int ans = 0;
        
        for(int i=0;i<primesSize;i++){
            
            long long notExceed = sqrt(N)/primes[i];
            ans += (upper_bound(primes.begin(),primes.begin()+i,notExceed) - primes.begin());
            
        }
        
        for(int i=0;i<primesSize;i++){
            long long sq = primes[i]*primes[i];
            
            if(sq*sq*sq*sq <= N) ans++;
            else break;
            
        }
        return ans;
    }
};
