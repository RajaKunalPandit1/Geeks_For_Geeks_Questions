Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2233
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    long long findNumber(long long N){
        
        long ans = 0 , num = 1;
        while(N != 0){
            if(N%5==0){
                ans += 9 * num;
               N = N/5 - 1;
            }else if(N%5==1){
                ans += 1 * num;
                N = N/5;
            }else if(N%5==2){
                 ans += 3 * num;
                 N = N/5;
            }else if(N%5==3){
                 ans += 5 * num;
                 N = N/5;
            }else if(N%5==4){
                 ans += 7 * num;
                 N = N/5;
            }
            num = num * 10;
        }
        return ans;
    }
};
