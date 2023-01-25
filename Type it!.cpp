Output Status  :

Problem Solved Successfully
Test Cases Passed: 
170 /170
Total Points Scored: 
2 /2
Your Total Score: 
1861
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int minOperation(string s) {
        
        int  n = s.size();
        int res =0 ;
        
        for(int i=0;i<n;i++){
            bool flag = 1;
            for(int j=0;j<i;j++){
                if(i+j >= n){
                    flag = 0;
                }else if(s[i+j] != s[j]){
                    flag = 0;
                }
            }
            if(flag && i>0){
                res = max(res,i);
            }
        }
        if(res == 0){
            res++;
        }
        return (n-res+1);
    }
};
