Output Status :

Problem Solved Successfully
Test Cases Passed: 
170 /170
Total Points Scored: 
4 /4
Your Total Score: 
1695
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

  //Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.

int solve(int i,int j,int n,int m){
    int x,y,count = 0;
    x  = i+1;
    y = j-2;
    if(x>=0 && y>=0 && x<n && y<m){
        count = count + 2;
    }
    x  = i+1;
    y = j+2;
    if(x>=0 && y>=0 && x<n && y<m){
        count = count + 2;
    }
    x  = i+2;
    y = j-1;
    if(x>=0 && y>=0 && x<n && y<m){
        count = count + 2;
    }
    x  = i+2;
    y = j+1;
    if(x>=0 && y>=0 && x<n && y<m){
        count = count + 2;
    }
    return count;
}

long long numOfWays(int N, int M)
{
    long long int val = N*M;
    long long int total = ((val)*(val-1));
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            int num = solve(i,j,N,M);
            total  = total - num;
        }
    }
   return total%1000000007;
}
