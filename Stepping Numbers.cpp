Output Status : 

Problem Solved Successfully
Test Cases Passed: 
486 /486
Total Points Scored: 
4 /4
Your Total Score: 
1506
Total Time Taken: 
0.01
Your Accuracy: 
50%
Attempts No.: 
2

class Solution {
public:
    
    void solve(int value, int n, int m, int &count){
        
        if(value > m){
            return;
        }
        
        if(n <= value && value <= m){
            count++;
        }
        
        int back = value % 10;
        
        if(back != 0){
            solve(value*10 + (back-1),n,m,count);
        }
        if(back != 9){
            solve(value*10 + (back+1),n,m,count);
        }
    }
    
    int steppingNumbers(int n, int m)
    {
        int count = 0;
        
        if(n == 0){
            count++;
        }
        
        for(int i=1;i<=9;i++){
            solve(i,n,m,count);
        }
        return count;
    }
};
