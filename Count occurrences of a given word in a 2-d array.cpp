Output Status :

Problem Solved Successfully
Test Cases Passed: 
304 /304
Total Points Scored: 
8 /8
Your Total Score: 
1368
Total Time Taken: 
0.02
Your Accuracy: 
33%
Attempts No.: 
3


 class Solution{
    public:
    void solve(int i,int j,int n,int m,vector<vector<char> > &mat,int index,string tar,int &ans,string s){
       if(i>=n||j>=m||j<0||i<0 || mat[i][j]!=tar[index]) return ;
       if(index==tar.size()-1){
           ans++;
           return;
       }
       char ch=mat[i][j];
       mat[i][j]='-1';
       solve(i+1,j,n,m,mat,index+1,tar,ans,s+mat[i][j]);
       solve(i,j+1,n,m,mat,index+1,tar,ans,s+mat[i][j]);
       solve(i,j-1,n,m,mat,index+1,tar,ans,s+mat[i][j]);
       solve(i-1,j,n,m,mat,index+1,tar,ans,s+mat[i][j]);
       mat[i][j]=ch;
   }
   int findOccurrence(vector<vector<char> > &mat, string target){
       int ans=0;
       int n=mat.size();
       int m=mat[0].size();
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(mat[i][j]==target[0]){
                   solve(i,j,n,m,mat,0,target,ans,"");
               }
           }
       }
       return ans;
   }
