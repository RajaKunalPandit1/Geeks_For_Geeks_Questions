Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1035 /1035
Total Points Scored: 
8 /8
Your Total Score: 
2079
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long helper( int n, const vector< int >& a, int m ) {
    vector< int > v( 2 * n + 1 ); v[ n ]++;
    long long x{}, t{}, j{ n };
    for ( int i{}; i < n; ++i, ++v[ j ] )
        x += t += a[ i ] >= m ? v[ j++ ] : -v[ --j ];
    return x;
}

    long long countSubarray( int N, vector< int > A, int M ) {
     return helper( N, A, M ) - helper( N, A, ++M );
  }
};
