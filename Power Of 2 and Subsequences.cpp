Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
13532 /13532
Your Total Score: 
1374
Total Time Taken: 
0.27
Correct Submission Count: 
3
Attempts No.: 
3

class Solution{
public:
    #define ll long long 

#define mod 1000000007

ll int solve(ll int a,ll int b)

{

    if(b==0)return 1;

    

    ll int ans=solve(a,b/2);

    if(b&1)

    {

        return ans%mod*ans%mod*a%mod;

    }

    else{

        return ans%mod*ans%mod;

    }

}

    long long numberOfSubsequences(int N, long long A[]){

       ll int cnt=0;

       for(ll int i=0;i<N;i++)

       {

           if(ceil(log2(A[i]))==floor(log2(A[i])) && A[i]!=0)

           {

               cnt++;

           }

       }

       return (solve(2,cnt)-1)%mod;

    }
};
