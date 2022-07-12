Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
111 / 111
Total Points Scored:
4/4
Total Time Taken:
0.72/1.54
Your Accuracy:
50%
Attempts No.:
2


class Solution{
    public:
    int dp[501][501];
    
    int unsub(string &s, string &t, int i, int j){
        
        if(i>=s.size()) return 501;
        if(j>=t.size()) return 1;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int k = j;
        
        for(;k<t.size();k++){
            if(s[i] == t[k]) break;
        }
        
        if(k == t.size()) return 1;
        
        return dp[i][j] = min(unsub(s,t,i+1,j),unsub(s,t,i+1,k+1) + 1);
                
    }
  
  
    int shortestUnSub(string s, string t) {
        
        memset(dp,-1,sizeof(dp));
        
        int ans = unsub(s,t,0,0);
        
        if(ans >= 501){
            return -1;
        }
        return ans;
    }
};
