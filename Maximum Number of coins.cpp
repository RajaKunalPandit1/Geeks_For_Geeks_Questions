Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
8 /8
Your Total Score: 
2061
Total Time Taken: 
0.23
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int maxCoins(int N, vector <int> &a){
    
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return f(a,0,N-1,dp);
    }
    
    int f(vector <int> &arr,int lo,int hi,vector<vector<int>>& dp) {
    	    if(lo>hi) return 0;
    	    
    	    if(dp[lo][hi]!=-1) return dp[lo][hi];
    	    
    	    int ans=0;
    	    for(int i=lo;i<=hi;i++) {
    	        int val=arr[i];
    	        if(lo-1>=0) val*=arr[lo-1];
    	        if(hi+1<arr.size()) val*=arr[hi+1];
    	        val += (f(arr,lo,i-1,dp) + f(arr,i+1,hi,dp));
    	        
    	        ans = max(ans,val);
    	    }
    	    return dp[lo][hi]=ans;
    }
};
