Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1063 /1063
Total Points Scored: 
4 /4
Your Total Score: 
1727
Total Time Taken: 
2.32
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        int ans = 0;
        if(ty==0){
            if(j%2!=0){
                if(i-1>=0) ans += mat[i-1][j];
                if(j-1>=0) ans += mat[i][j-1];
                if(j+1<m)  ans += mat[i][j+1];
                if(i+1<n)  ans += mat[i+1][j];
                if(i+1<n && j-1>=0) ans += mat[i+1][j-1];
                if(i+1<n && j+1<m) ans += mat[i+1][j+1];
            }
            else if(j%2==0){
                 if(i-1>=0) ans += mat[i-1][j];
                 if(j-1>=0) ans += mat[i][j-1];
                 if(j+1<m)  ans += mat[i][j+1];
                 if(i+1<n)  ans += mat[i+1][j];
                 if(i-1>=0 && j-1>=0) ans += mat[i-1][j-1];
                 if(i-1>=0 && j+1<m)  ans += mat[i-1][j+1];
            }
        }
        else if(ty==1){
            if(j%2!=0){
               if(i-2>=0) ans += mat[i-2][j];
               if(j-2>=0) ans += mat[i][j-2];
               if(j+2<m)  ans += mat[i][j+2];
               if(i+2<n)  ans += mat[i+2][j];
               
               if(i+2<n && j-1>=0)  ans += mat[i+2][j-1];
               if(i+1<n && j-2>=0)  ans += mat[i+1][j-2];
               
               
               if(i+2<n && j+1<m )  ans += mat[i+2][j+1];
               if(i-1>=0 && j-2>=0) ans += mat[i-1][j-2];
               
               if(i-1>=0 && j+2<m)  ans += mat[i-1][j+2];
               if(i+1<n && j+2<m )  ans += mat[i+1][j+2];
               
               if(i-1>=0 && j-1>=0) ans += mat[i-1][j-1];
               if(i-1>=0 && j+1<m)  ans += mat[i-1][j+1]; 
            }
            else if(j%2==0){
               if(i-2>=0) ans += mat[i-2][j];
               if(j-2>=0) ans += mat[i][j-2];
               if(j+2<m)  ans += mat[i][j+2];
               if(i+2<n)  ans += mat[i+2][j];
               
               if(i+1<n && j+2<m ) ans += mat[i+1][j+2];
               if(i+1<n && j-2>=0) ans += mat[i+1][j-2];
               
               if(i-1>=0 && j-2>=0) ans += mat[i-1][j-2];
               if(i-2>=0 && j-1>=0) ans += mat[i-2][j-1];
               
               if(i-2>=0 && j+1<m) ans += mat[i-2][j+1];
               if(i-1>=0 && j+2<m) ans += mat[i-1][j+2];
               
               if(i+1<n && j-1>=0) ans += mat[i+1][j-1];
               if(i+1<n && j+1<m) ans += mat[i+1][j+1];  
            }
        }
     return ans;
    }
};
