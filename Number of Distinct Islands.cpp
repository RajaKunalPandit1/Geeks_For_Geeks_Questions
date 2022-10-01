Output Status : 

Problem Solved Successfully
Test Cases Passed: 
132 /132
Total Points Scored: 
4 /4
Your Total Score: 
1422
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
      void dfs(int i, int j, int n, int m, vector<vector<int>> &a, string &s) {
        if(i<0 || i>=n || j<0 || j>=m || a[i][j]==0 || a[i][j]==2) return;
        a[i][j]=2;
        s+='d';
        dfs(i+1,j,n,m,a,s);
        s+='u';
        dfs(i-1,j,n,m,a,s);
        s+='r';
        dfs(i,j+1,n,m,a,s);
        s+='l';
        dfs(i,j-1,n,m,a,s);
    }
    int countDistinctIslands(vector<vector<int>>& a) {
        int i, j, n=a.size(), m=a[0].size();
        unordered_map<string, int> mp;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                if(a[i][j]==1) {
                    string s="";
                    dfs(i,j,n,m,a,s);
                    mp[s]++;
                }
            }
        }
        return mp.size();
    }
};
