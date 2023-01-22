Output Status : 

Problem Solved Successfully
Test Cases Passed: 
263 /263
Total Points Scored: 
4 /4
Your Total Score: 
1851
Total Time Taken: 
0.25
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {

  public:
    int solve(int N, int K, vector<int> &arr) {
        
         int sum = 0 ;

        for( auto i : arr )
        {

            sum += i ;
        }

        vector<int>divisors ;

        for( int i = 1 ; i <= sqrt(sum) ; i++ )
        {
            if( sum%i == 0 )
            {
               divisors.push_back(i) ;

                divisors.push_back(sum/i) ;

            }
        }

        for( int i = 1 ; i < N ; i++ )
        {

            arr[i] += arr[i-1] ;

        }

        int ans = 1 ;

        for( auto d : divisors )
        {
            int c = 0 ;
            for( int i = 0 ; i < N ; i++ )
            {
                if(arr[i]%d==0)c++ ;

                if( c >= K )
                {
                    ans = max( ans , d ) ;
                }
            }
        }
        return ans ;
        
    }
};
