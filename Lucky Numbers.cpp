Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2836
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

        bool check( int n , int div)
    {
        if( div > n)
        {
            return true;
        }
        
        if( n % div == 0)
        {
            return false;
        }
        else
        {
            return check(n-(n/div) , div + 1);
        }
    }
    
    bool isLucky(int n) {
        
        return check(n , 2);
    }
