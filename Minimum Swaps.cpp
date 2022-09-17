Output Status : 

Problem Solved Successfully
Test Cases Passed: 
136 /136
Total Points Scored: 
2 /2
Your Total Score: 
1382
Total Time Taken: 
0.38
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
public:
    int minimumSwaps(int c[],int v[],int n,int k,int b,int t)
    {
            
        int swap = 0,cnt = 0;
        
        for(int i=n-1;i>=0;i--){
            
            if(c[i] + v[i]*t >= b){
                swap += cnt;
                k--;
            }else{
                cnt++;
            }
            
            if(k == 0){
                return swap;
            }
        }
        return -1;
    }
};
