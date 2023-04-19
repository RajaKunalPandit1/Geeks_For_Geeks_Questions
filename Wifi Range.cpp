Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2197
Total Time Taken: 
0.14
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        
        int cnt=0;
        for(int i=0;i<N;i++){
            if(S[i]=='0')cnt++;
            else{
                if(cnt>X)return false;
                cnt=-X;
            }
        }
        if(cnt>0)return false;
        return true;
        
    }
};
